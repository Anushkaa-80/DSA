#include <stdio.h>
#include <string.h>

// Function to find the longest common string
void findLongestCommonString(char **strings, int N) {
    int minLen = 100; // Assuming maximum length of string is 100
    int i, j, k;

    // Find the minimum length among the strings
    for (i = 0; i < N; i++) {
        int len = strlen(strings[i]);
        if (len < minLen) {
            minLen = len;
        }
    }

    // Initialize result
    char result[minLen];
    int index = 0;

    // Iterate through characters
    for (i = 0; i < minLen; i++) {
        char currentChar = strings[0][i];

        // Check if current character is common in all strings
        for (j = 1; j < N; j++) {
            if (strings[j][i] != currentChar) {
                // If not common, set result and break
                result[index] = '\0';
                break;
            }
        }

        // If character is common, add to result
        if (j == N) {
            result[index] = currentChar;
            index++;
        }
    }

    // Print the result
    if (index > 0) {
        result[index] = '\0';
        printf("%s\n", result);
    } else {
        printf("NAN\n");
    }
}

int main() {
    int N;
    printf("Enter the number of strings: ");
    scanf("%d", &N);

    // Dynamically allocate memory for an array of strings
    char **strings = (char **)malloc(N * sizeof(char *));
    for (int i = 0; i < N; i++) {
        strings[i] = (char *)malloc(100 * sizeof(char)); // Assuming maximum length of string is 100
    }

    printf("Enter %d strings separated by space: ", N);
    for (int i = 0; i < N; i++) {
        scanf("%s", strings[i]);
    }

    // Call the function to find the longest common string
    findLongestCommonString(strings, N);

    // Free allocated memory
    for (int i = 0; i < N; i++) {
        free(strings[i]);
    }
    free(strings);

    return 0;
}
