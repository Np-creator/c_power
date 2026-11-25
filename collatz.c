#include "base.h"

int collatz(int n){

    /*int gerade = n % 2 == 0;         in C Assignment is =
                                       in C == lit. means Boolean not assign.
    int ungerade = n % 2 == 1;         so do not write == for assign. 
                                       just simply write = 
                                       otherwise C will check the Boolean outcome,
                                       for ex. if n = 8 , n % 2 == 0 is true not the value of 0 
                                       so basically it means true (1)
                                       actually it was correct but i have calculated in a wrong place
                                      
    int result;
    
    */
     
    while (n > 0)

    int is_gerade = n % 2 == 1;

    int is_ungerade = n % 2 == 0;
    {
        

        if (is_gerade)
        {
            result = n / 2;            // the compiler should save the n / 2 part in
                                       // some place anyways! 
                                       // now we have our n that is divided by 2 somewhere = result!
            
            
        }
        
        else if (result == is_gerade)
        {
            result = result / 2;       //same as here, we have saved our result again somewhere!
            
        }

        else if (result == is_ungerade)
        {
            result = result * 3 + 1; 
            
        }

        else if (result == 1)
        {
            break;
        }
        
    }
    
    return 0;

}

int main(void){
    collatz(7); 
    return 0; 
}