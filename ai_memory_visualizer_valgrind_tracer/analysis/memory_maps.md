# Memory Mapping & Visualizer Analysis

## 1. Stack Behavior (`stack_example.c`)
- **Execution State:** Detail of recursive stack frames (Depth 1 -> 2 -> 3).
- **Stack Diagram:** (Show how local variables and return addresses are pushed/popped).
- **Lifetime & Pitfall:** Returning `p_local` causes a dangling pointer because its stack frame is popped upon function exit.
- **AI Critique:** The AI overlooked the dangling pointer lifetime issue and assumed the buffer was safe. Corrected by mapping the function's stack frame destruction.

## 2. Heap Allocation & Leaks (`heap_example.c`)
- **Memory Map:** Track heap allocations (`malloc`) vs stack pointers (`alice`, `bob`).
- **Issues Identified:**
  - `alice`: Memory leak (Heap block remains allocated without `free()`).
  - `bob`: Double free bug (Attempting to release already unallocated heap memory).

## 3. Crash & Segmentation Fault (`crash_example.c`)
- **Causal Chain:** Missing NULL check after memory allocation -> NULL pointer dereference -> Invalid memory access -> Segmentation Fault (`SIGSEGV`).

## 4. Aliasing & Use-After-Free (`aliasing_example.c`)
- **Ownership Analysis:** `a` and `b` reference the exact same memory address on the Heap.
- **Bug:** `free(a)` invalidates the heap memory, turning `b` into a dangling pointer.
- **Use-After-Free:** Reading/writing via `b[2]` or `b[3]` accesses invalid memory.

mapping : 

heap_example: leak due to lost ownership
Stack (main):
alice (Person*) → points to a heap block
bob (Person*) → points to a heap block
Heap:
Alice's Person struct block (name, age=30)
name → points to char[6] containing "Alice"
Bob's Person struct block (name, age=41)
name → points to char[4] containing "Bob"
What happens:
For Bob: free(bob->name) then free(bob) → both blocks correctly freed.
For Alice: person_free_partial(alice) only calls free(p) → the struct block is freed, but the char[6] block containing "Alice" is never freed → memory leak ("definitely lost", 6 bytes).

crash_example: write through a NULL pointer
Stack (main):
nums (int*) = NULL
n = 0
Heap:
No block allocated at all (malloc was never reached, since n <= 0 triggers an early return inside allocate_numbers).
What happens:
nums holds address 0x0 (unmapped memory).
The instruction nums[0] = 42; attempts an invalid write to that address.
Result: SIGSEGV (segmentation fault), confirmed by GDB and Valgrind ("Address 0x0 is not stack'd, malloc'd or free'd").

aliasing_example: use-after-free via an alias pointer
Stack (main):
a (int*) → points to a heap block
b (int*) → points to the same heap block (alias of a)
Heap:
One int[5] block (20 bytes), allocated once by make_numbers.
What happens:
a and b both reference the identical block (aliasing).
free(a) releases that block — its lifetime ends here.
b becomes a dangling pointer: it still holds the old address.
b[2] (read) and b[3] = 1234 (write) then access this freed memory → use-after-free, flagged three times by Valgrind (2 invalid reads, 1 invalid write).

stack_example: correctly managed stack frame lifetimes
Stacked call frames (recursion depth 0 → 3):
walk_stack(0): marker=0 → calls dump_frame("enter",0): local_int=100, local_buf, p_local
walk_stack(1): marker=10 → dump_frame("enter",1): local_int=101, ...
walk_stack(2): marker=20 → ...
walk_stack(3): marker=30 → ... (max depth reached)
returns → dump_frame("exit",2) then depth=2 frame destroyed
returns → dump_frame("exit",1) then depth=1 frame destroyed
returns → dump_frame("exit",0) then depth=0 frame destroyed
