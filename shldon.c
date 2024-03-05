#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
long int N,A,B;
long int cnt;
scanf("%ld%ld%ld",&N,&A,&B);

long int rem,sum;

sum=(A+B);
cnt=A*(N/sum);
rem=N%sum;

if(rem<=A)
{
    cnt=cnt+rem;
}
    else
    {
        cnt=cnt+A;
    }
 printf("%ld",cnt);
}

