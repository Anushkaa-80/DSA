#include <stdio.h>
#include <string.h>

int main() {
    // Reading the length of the string
    int L;
    scanf("%d", &L);

    // Reading the string
    char inputString[L + 1];  // +1 for null terminator
    scanf(" %[^\n]", inputString);

    // Counting occurrences of "aps" with spaces
    int count = 0;
    char *ptr = inputString;
    while ((ptr = strstr(ptr, "aps")) != NULL) {
        count++;
        ptr += 3; // Move the pointer forward by the length of "aps"
        if (*ptr == ' ' || *ptr == '\0') {
            //count++;  // Count if there is a space or end of string after "aps"
        }
    }

    // Displaying the result
    printf("%d\n", count);

    return 0;
}
