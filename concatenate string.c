#include <stdio.h>
#include <stdlib.h>

// Function to find the integer value
// obtained by joining array elements together
int ConcatenateArr(int arr[], int N)
{
    // Resultant string
    char res[100];

    // Initialize result string
    res[0] = '\0';
int i,ans;
    // Traverse the array arr[]
    for ( i = 0; i < N; i++){
        // Convert the integer to string
        char curr[20];
        sprintf(curr, "%d", arr[i]);

        // Concatenate curr to res
        strcat(res, curr);

    }
    // Convert the res to integer
      ans = atoi(res);

    // Return the ans
   printf("%d",ans);
}

// Driver Code
int main()
{
    // Input
    int arr[] = {4,5,6,7,9};
    int N = sizeof(arr) / sizeof(arr[0]);

    // Function call
    ConcatenateArr(arr,N);

    return 0;
}
