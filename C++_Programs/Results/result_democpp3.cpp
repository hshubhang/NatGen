#include <iostream>

int calculate(int x) {
    if (x!= 1) {
        int a = x * calculate(x - 1);
        return a;
    } else {
        return 1;
    }
}

int main() {
    int num = 5;
    int result = calculate(num);
    std::cout << "The factorial of " << num << " is " << result << std::endl;
    return 0;
}
