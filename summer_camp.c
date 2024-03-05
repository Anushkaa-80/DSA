#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int kthSmallest(int arr[], int N, int K);

int main()
{
    int p,c,n;
    scanf("%d%d%d",&p,&c,&n);

    int a[p][c],arr[100];
    for(int i=0;i<p;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",&a[j]);
        }
        printf("\n");
    }
  for(int i=0;i<p;i++)
    {
        for(int j=0;j<c;j++)
        {
           printf("%d",a[i][j]);
        }
        printf("\n");
         printf("K'th smallest element is %d",
           kthSmallest(a[][], c, c));
              printf("K'th smallest element is %d",
           kthSmallest(a[][], c, c-1));
    }
     printf("K'th smallest element is %d",
           kthSmallest(a, c, c));
              printf("K'th smallest element is %d",
           kthSmallest(a, c, c-1));
}
int cmpfunc(const void* a, const void* b)
{
    return (*(int*)a - *(int*)b);
}
int kthSmallest(int a[], int c, int K)
{
        qsort(a, c, sizeof(int), cmpfunc);

    return a[K - 1];
}




