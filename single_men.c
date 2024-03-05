#include<stdio.h>

#define MAX_N 10

int main() {
    int N;
    printf("Enter the number of men and women: ");
    scanf("%d", &N);

    int preferences[MAX_N][MAX_N];

    // Input preferences
    printf("Enter preferences for each woman:\n");
    for (int i = 0; i < N; i++) {
        printf("Preferences for woman %d: ", i + 1);
        for (int j = 0; j < N; j++) {
            scanf("%d", &preferences[i][j]);
        }
    }

    // Initialize array to track whether a man is preferred
    int isPreferred[MAX_N] = {0};

    // Mark men as preferred
    for (int i = 0; i < N; i++)
        {
        for (int j = 0; j < N; j++)
        {
            if (preferences[i][j] != -1)
            {
                isPreferred[preferences[i][j] - 1] = 1;
            }
        }
    }

    // Print single men
    printf("Single men: \n");
    int noSingleMen = 1;
    for (int i = 0; i < N; i++) {
        if (!isPreferred[i]) {
            printf("%d\n", i + 1);
            noSingleMen = 0;
        }
    }

    if (noSingleMen) {
        printf("-1\n");
    }

    return 0;
}
