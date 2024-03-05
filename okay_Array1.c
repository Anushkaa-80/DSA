#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
int t;
    scanf("%d",&t);
    int n,k;
     int a[1001];
    for(int i=0;i<t;i++)
    {
        scanf("%d",&n);

        for(int j=0;j<n;j++)
        {
            scanf("%d",&a[j]);
        }
        scanf("%d",&k);


    int cnt=1,num=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]==a[i+1])
        {
            cnt++;

        }
        else
        {
            if(cnt==k)

            {
                num++;
            }
          cnt=1;
        }
    }

    if(num==k)
    {
        printf("1\n");
    }
    else
    {
        printf("-1\n");
    }
    }
}
