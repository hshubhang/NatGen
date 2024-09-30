#include <stdio.h>

int maxOfThree(int num1, int num2, int num3) {
    int max;
    
    if (num1 <= num2) {
        if (num2 > num3) {
            max = num2;
        } else {
            max = num3;
        }
    } else {
        if (num1 > num3) {
            max = num1;
        } else {
            max = num3;
        }
    }

    return max;
}

int main() {
    int a = 5, b = 10, c = 3;
    printf("The maximum number is: %d\n", maxOfThree(a, b, c));
    return 0;
}
