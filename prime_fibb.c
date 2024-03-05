#include<stdio.h>
int main()
 {
  int n;
     printf("Enter the no of terms");
     scanf("%d",&n);

int i=1;
  int a=-1,b=1,c;
     while(i<=n)

        {
         c=a+b;
         printf("%d\t",c);
         a=b;
         b=c;
         i++;
     }
     return 0;
 }
