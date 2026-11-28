#include "base.h"

int sum(int n) {

    int i = 1;                         // assigned 1 to i 
    int result = 0;                    // assigned 0 to result

    while (i <= n) {                   // while... as long as i that is assigned to 1 is smaller than
                                       // check #A# is i <= n then #B# Loop
                                       // n which is here dynamic DO : #B#
        int m = i % 2 == 0;            // introduced a new integer which is m   
                                       // m = *i* % 2 == 0; the value of m is 0, nothing else.
                                       // i is assigned to 1 ; m check the even number of i
        if (m) {                       // is m % 2 zero? Yes => Then 
            result = result + i;       // add result to the i.
        }                              // basically means 0 + 1 and assign it to *new* result

        i++;                           // result value updates itself 
    }                                  // add to i++ by one and then #A#

    return result;
}

/* #### my idea ###

   lvl 1:
   add all uneven numbers of 1 - 100.

*/

int sum_uneven(int stop_point){

    int j = 1;
    int result_0 = 0;  

    while(stop_point >= j){                         // we need a start point             START = 1; 
                                                    // and actually a stop point         STOP = 100;
                                                    // check if the number is uneven     int check = STARTPOINT % () 2 == 1

        int uneven_number = j % 2 == 1;

        if(uneven_number) {

            result_0 = result_0 + j; 
            
        }

        j++;

    }

    return result_0;

}            





///////////////////////////////////////////////////////////////////////////////////////
/////////////////////////  ### TEST ###  /////////////////////////////////////////////

void test_sum() {
    test_equal_i(sum(20), 110);
    test_equal_i(sum(4), 6);
    test_equal_i(sum(12), 42);
    test_equal_i(sum(439), 1289);
}

/////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////


////////////////////////////////////////////////////////////////////////////////////
/////////////////////// ### Program begins here #### ///////////////////////////////

int main(void){
    test_sum();
    printf("\nSum of uneven number 0-100 is %d \n", sum_uneven(100));
    return 0; 
}