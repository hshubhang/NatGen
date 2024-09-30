#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* append_based_on_condition(const char* input, int condition) {
    char* result;

    if (condition!= 1) {
        result = (char*)malloc(strlen(input) + strlen(" - OtherCondition") + 1);
        if (result == NULL) return NULL;
        strcpy(result, input);
        strcat(result, " - OtherCondition");
    } else {
        result = (char*)malloc(strlen(input) + strlen(" - Condition1") + 1);
        if (result == NULL) return NULL;
        strcpy(result, input);
        strcat(result, " - Condition1");
    }

    return result;
}

int main() {
    char* modifiedStr = append_based_on_condition("SampleString", 1);
    if (modifiedStr!= NULL) {
        printf("Modified String: %s\n", modifiedStr);
        free(modifiedStr);
    }
    return 0;
}
