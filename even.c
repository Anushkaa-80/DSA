
#include<stdio.h>

void main()
{
    int n,num;
    scanf("%d",&num);

    n=num/2;

    for(int i=0;i<n;i++)
    {
     num=num-2;
    }
   if(num==0)
    printf("even");
   else
    printf("odd");
}
