#include "base.h"

int collatz(int n) {                          // we declared a function and integer called n, 
     
    while (n > 1) {                           // the problem statement is this:                

                                              // if the number reaches 1 -> Stop 

    int is_gerade = n % 2 == 0;                /* we declare two booleans one is is_gerade
                                                  one is_ungerade!  */            

    int is_ungerade = n % 2 == 1;             // learning the mistakes
                                              // what does the line of code means: 
                                              // it means is_gerade must exactly be = 0 and it is NOT 
                                              // assigned to 0!               


    
        /* Actually I have overthought this part
           we have  two types for our n
           one is gerade and the other one is ungerade
           if gerade = DO THIS = n / 2 
           if ungerade = DO THIS = 3 * n + 1 
           actually, you do not need another int result; here
           that was my fault. you just assign a new value to 
           the old n like this: n = n / 2; 
           translated --> n = (n / 2)
           so the new could be either gerade or ungerade....
           */

        if (is_gerade)
        {
            n = n / 2;
                                                // the compiler should save the n / 2 part in
                                                // some place anyways! 
                                                // now we have our n that is divided by 2 somewhere = result!
                                                /* the lines above was my fault !!!
                                                we do not need a new result we just assigned a new n inside the n
                                                also, the if statement can be two, if and else if
                                                the program goes and scans the new n till it reaches one!*/
            
        }

        else if (is_ungerade)
        {

            n = n * 3 + 1;

        }

        printf(" -> %d" , n);
        
    }
    
    printf("\n");

}

int next(int biggest_num) {

    

    return 0; 

}









///////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////// #### TEST #### ///////////////////////////////////////////////////////


int main(void) {

    collatz(3);
    collatz(12);
    collatz(1);
    collatz(8);
    collatz(5);
    collatz(2);
    collatz(100);
    
    return 0; 
}



