#include <stdio.h>

#define MAX_CITIES 1000

int minRefills(int cities[], int n) {
    int currentRefill = 0, lastRefill = 0, numRefills = 0;

    while (currentRefill <= n) {
        lastRefill = currentRefill;

        // Move to the farthest city we can reach with one tank of gas
        while (currentRefill <= n && (cities[currentRefill + 1] - cities[lastRefill]) <= cities[0]) {
            currentRefill++;
        }

        // If we cannot reach the next city
        if (currentRefill == lastRefill) {
            return 0; // Solution not possible
        }

        if (currentRefill <= n) {
            numRefills++;
        }
    }

    return numRefills;
}

int main() {
    int n, cities[MAX_CITIES], i;

    // Input the number of cities
    scanf("%d", &n);

    // Input the refills for each city
    for (i = 1; i <= n; i++) {
        scanf("%d", &cities[i]);
    }

    // Add source and destination cities
    cities[0] = 0;
    cities[n + 1] = 0;

    // Find the minimal number of refills required
    int min_refills = minRefills(cities, n);

    // Output the result
    printf("%d\n", min_refills);

    return 0;
}
