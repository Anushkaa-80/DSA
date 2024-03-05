#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    int count=0;
    int max=0,j=0,last=0,temp_first=0,first;
    for(int i=0; i<n-1; i++)
    {
        //j=i;

        if(a[j+1]>=a[j])
        {
            if(count==0)
            {
                temp_first=a[j];
            }
            count++;
            j++;
        }




        else
        {
            if(count>max)
            {
                first=temp_first;
                last=a[j];
                max=count;
            }
            count=0;
            j++;
        }
         //first=a[j+1-count];

    }
    printf("%d %d",first,last);
    return 0;
}
