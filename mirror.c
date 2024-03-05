#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

//d mirror(char s[1501], int l, int r);

int main()
{
    char s[1501],temp;
    int l,r;
    fgets(s,sizeof(s),stdin);
    printf("%s",s);
    scanf("%d %d",&l,&r);

    for(int i=l-1;i<r;i++)
    {
        s[i]=155-s[i];
    }

for(int i=l; i<r-l; i++)
{
  temp=s[i];
temp=155-s[i];
s[i]=temp;
}
        printf("%s",s);

}
