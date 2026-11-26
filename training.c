#include "base.h"

int sum(int n) {

    int i = 1;
    int result = 0;

    while (i <= n) {

        int m = i % 2 == 0;

        if (m) {
            result = result + i;
        }

        i++;
    }

    return result;
}

/*int main(void) {

    printf("Sum = %d\n", sum(20));


    return 0;
}*/

void test_sum() {
    test_equal_i(sum(20), 110);
    test_equal_i(sum(4), 6);
    test_equal_i(sum(12), 42);
    test_equal_i(sum(439), 1289);
}

int main(void){
    test_sum();
    return 0; 
}