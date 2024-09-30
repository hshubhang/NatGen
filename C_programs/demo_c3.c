#include <stdio.h>

int factorial(int VAR_0) {
    if (VAR_0 == 0) {
        return 1;
    } else {
        return VAR_0 * factorial(VAR_0 - 1);
    }
}

int main() {
    int VAR_1 = 5;
    int VAR_2 = factorial(VAR_1);
    printf("The factorial of %d is %d\n", VAR_1, VAR_2);
    return 0;
}
