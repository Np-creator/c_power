/*
Compile: make leap_years
Run: ./leap_years
make leap_years && ./leap_years
*/

#include "base.h"  //include prog1lib
/*
 Return the number of days in the given year.A leap year has 366 days, a non-leap
 year has 365 days = THE PROBLEM STATEMENT  (we should return the years' days whatsoever) 
*/
int number_of_days(int years) {
                                       //we need a function first-hand here we call it num_..days
    bool multipe_by_four = years % 4 == 0;

    bool multiple_by_100 = years % 100 == 0;

    bool multiple_by_400 = years % 400 == 0;
    
    if (!multipe_by_four || (multiple_by_100 && !multiple_by_400))
        {
        return 366;
    }

    else{
        return 365;
    }
                      
}

int ganze_zahl(int num){

    bool is_ganz = num % 2 == 0;

    if (is_ganz == true)
    {

        return 2;

    }
    
    else {

        return 1;

    }

} 



int main(void){
    test_equal_i(number_of_days(2000), 365);
    test_equal_i(number_of_days(2015), 366);
    test_equal_i(number_of_days(1997), 365);
    test_equal_i(number_of_days(1957), 366);
    test_equal_i(ganze_zahl(20),1);
    test_equal_i(ganze_zahl(35),2);
    test_equal_i(ganze_zahl(44),2);
    test_equal_i(ganze_zahl(13),1);
    return 0;
}




//PEAK 