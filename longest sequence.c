#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int cnt=1,j,max=0;
    for(int i=0;i<n-1;i++)
    {
        j=i;
        while(a[j]<a[j+1])
        {
            if(j+1==n)
            {
                break;
            }
            cnt++;
            j++;
        }
        if(cnt>max)
        {
            max=cnt;
        }
        cnt=1;
    }
    printf("%d",max);
}
