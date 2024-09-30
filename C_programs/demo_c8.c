#include <stdio.h>

int calculate(int x) {
    if (x == 1) {
        return 1;
    } else {
        int a = x * calculate(x - 1);
        return a;
    }
}

int main() {
    int num = 5;
    int result = calculate(num);
    printf("The factorial of %d is %d\n", num, result);
    return 0;
}
