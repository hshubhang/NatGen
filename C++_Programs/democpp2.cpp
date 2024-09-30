#include <iostream>
#include <string>

std::string append_based_on_condition(const std::string& input, int condition) {
    std::string result;
    if (condition == 1) {
        result = input + " - Condition1";
    } else {
        result = input + " - OtherCondition";
    }
    return result;
}

int main() {
    std::string modifiedStr = append_based_on_condition("SampleString", 1);
    std::cout << "Modified String: " << modifiedStr << std::endl;
    return 0;
}
