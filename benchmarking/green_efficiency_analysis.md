                                                                        
                                                        TASK 3 : Efficiency & Benchmarking report

    In this this project we add to look and learn how a working program takes time and energy to work and deliver the result we wanted or not. 

                                                        Measurement Methodology

    First , it was the question of how could we start to know the time it take for a given program to finish.
    
    For that we discovered the time.h library with the clock() feature that would let us have a clock timer inside the program , that by initializing it correctly
    and setting up every variables and total consumed time by the specific program in seconds with the CLOCKS_PER_SEC command that is given in the time library.
    
    So for the first task we had to run the given program 3 times just to see how even if the program is the same , the time respons could varie even just by a little 
    but for sure every time a bite different because the components of the pc do work on the program but could also do something else and be a little less fast etc...
    
    In the 2 task we had an other program disign to give us two differents time result but with the same final logic result. it's to demonstrate that even if the program
    give the same result one could be a lot more fast or slow depending on how they got created and disigned.

    And for last , the given program helped us look at how to make a clock work and witch part of the program is done faster and have the total time used of the program.
    
                                                        Observed performance differences

    TASK 1  : the program was done at approximately the same speed and in less than a second with the same exact program each time:
            -first 0.360122 seconds
            -second 0.360161 seconds
            -third 0.358059 seconds
    conclusion even if at the minimum , this little difference could still be percived in a bigger and more time consuming program were it could be different by seconds 
    or minutes.

    TASK 2  : the one got a big difference with the first part slow because it has one more loop:
            ~2.9 seconds for the first part
            ~0.000119 seconds for the second part

    TASK 3  : finaly this one work almost as fast for every part of the program but still let see the difference in time response between each functions:
            TOTAL seconds: 0.001889
            BUILD_DATA seconds: 0.000710
            PROCESS seconds: 0.000757
            REDUCE seconds: 0.000414

                                                        Relation between runtime and energy consumption

    pretty simple , the more a program takes time to be done , the more it will use in ernergy. so a good and efficient program will do what it was meant to do and create
    for , but in the fastest and simplest ways possible to be the least energy consuming. the great exemple is the task 2 that have the same result but the first part is
    10000* time more slow and take as much more in energy.

                                                        Limitation of the experiment

    Even if theses tasks let us see a bit of the difference in time consuption , these programs are too few and to fast to really see the difference that it could make
    on a really big program in time. and there is to few of the functions tested , in what order or not and with wich type of loop etc... and lastly , we are limited in
    a way to look at the energy consuption that is not provide in the results.

                                                        Practical engineering takeaway 

    So , what's the point ? theses tacks help us in the simplest way to look and understand how a program should be efficient and less time consuming , because in the
    present we should try to impact a lot less the environement and energy comsuption by making more meaningfull , usefull and efficient program and in a practical way ,
    a fast program with same result is a lot more usefull.
    
