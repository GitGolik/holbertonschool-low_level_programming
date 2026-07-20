analyse and report of valgrind

stack_example.c :

    valgrind report no error deteceted:

heap_example.c :

    valgrind report a memory leak by ownership loss
        in definitely lost :
            -p->name in person_new , loss of the string alice (6octets Alice'\0')
            it's due to the ownership loss of which mean that we can no longer access to the memory.it's because of the free(p) where we lost the pointer and can no longer access to p->name resulting in a memory leak

crash_example.c :

    valgrind report an invalide access memory on NULL pointer
        an invalide write of size 4
        main does not verifie nums pointer if NULL and allocate_numbers(0) return a NULL before malloc

aliasing_example.c :

    valgrind report a use after free in reading and execution
        b[2] and b[3] invalid read of size 8 and 12 inside a block of 20 free'd
        b[3] = 1234 invalid write of size 12 inside a block free'd
