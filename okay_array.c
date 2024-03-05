#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int t,n,k,cnt=1,a[100];
    scanf("%d",&t);

   for(int j=0;j<t;j++)
   {
       scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
   }
scanf("%d",&k);

for(int i=0;i<n;i++)
{
    int j=i;
    while(a[j]==a[j+1])
    {
       if(j+1==n)
    {
        break;
    }

        cnt++;
        j++;

    }


printf("%d",cnt);
}


}
