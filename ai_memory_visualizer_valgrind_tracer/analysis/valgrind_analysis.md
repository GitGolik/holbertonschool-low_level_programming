# Valgrind & Memory Tracer Analysis

## 1. Stack Memory Behavior (`stack_example.c`)
- **Valgrind Output:** 0 errors from 0 contexts.
- **Technical Explanation:** Valgrind Memcheck focuses on Heap allocation tracking. It does not natively catch logical stack-lifetime bugs (e.g., dangling pointers on popped stack frames).

## 2. Memory Leaks & Ownership (`heap_example.c`)
- **Error Type:** `Definitely Lost` / Memory Leak & `Invalid Free`.
- **Root Cause:**
  - `p->name` ("Alice") was allocated via `malloc` on the Heap. Freeing `p` without freeing `p->name` destroys the pointer holding the address, leading to a **loss of ownership**.
  - `bob` undergoes a **Double Free**, corrupting Heap metadata.

## 3. Invalid Memory Access & Crash (`crash_example.c`)
- **Error Type:** `Invalid write of size 4` -> `SIGSEGV`.
- **Causal Chain:** `allocate_numbers(0)` returns `NULL` -> `main` dereferences `NULL` (`nums[0] = ...`) -> Writing to unmapped memory address `0x0` causes an instant crash.

## 4. Aliasing & Use-After-Free (`aliasing_example.c`)
- **Error Type:** `Invalid read of size 4` / `Invalid write of size 4` (Use-After-Free).
- **Root Cause:** Both `a` and `b` alias the same heap memory block. Calling `free(a)` deallocates the block. Subsequent operations on `b[2]` or `b[3]` attempt to read/write memory that no longer belongs to the process.

## 5. Critical AI Review (Required Task)
- **AI Misinterpretation:** The AI suggested that "b[3] invalid write of size 12" meant a 12-byte variable write.
- **Correction:** The AI misinterpreted Valgrind's output log. The number `12` was the byte offset within the freed chunk (`12 bytes inside a block of size 20`), while the write size was actually 4 bytes (size of `int`).
