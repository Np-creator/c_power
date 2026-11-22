#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    int sum = 0;                // because we have a sum of 0 rn 

    int number;                // we here declared a num that we have a user to input

    int target_num = rand() %10 + 1;

    int user_number;

    srand(time(NULL));

    printf("Enter zero for break\n");

    while(1) 
    {
        printf("Enter a num:");

        scanf("%d", &number);

        if (number == 0)
        {
            break;
        }
        
        if (number > 0)
        {
            sum += number;
        }

        if (number < 0)
        {
            printf("Wrong number!");
            break;
        }
        
        
    }

    printf("Sum is %d\n",sum); 

    while (1)
    {
        printf("Guess a number:\n");
        scanf("Wrong number %d\n", &user_number);
        if (target_num == user_number)
        {
            printf("You WIN!");
            break;
        }
        else {
            printf("Enter another num:");
        }
        
            
    }
    

    return 0;
}

