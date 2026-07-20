analyse and report of memory mapping 

stack_example.c :

    its a program in recursion that as a depth of 3 to observe the frames of the stack (pile) while the recursion hapen.

    problem : 
        -undefined behavior possible if dump_frame return p_local in main which will already be destroyed
        -board local_buf[16] oversized and not size verified and protected
    the ai don't really see any real problem for him and only see probable bug if we go over the functions size

heap_example.c :

    it's a program that delibarately do a leak memory

    problem :
        -double free on bob
        -no free on alice
        -no verification in person_new if name == NULL
    the ai see the same problems

crash_example.c :

    it's a program that will do a crash

    problem :
        -allocate_numbers does not verifie if he return a NULL
    the ai saw the same problem

aliasing_example.c :

    example of use-after-free

    problem :
        -b = a alias with no owner , so confusion of which need to liberate it
        -b[2] used after free of free(a)
        -b[3] used after the same free 
        -b dangling pointer , not set on NULL after free
    the ai say the same thing
    