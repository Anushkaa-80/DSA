#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

//d mirror(char s[1501], int l, int r);

int main()
{
    char s[1501],str,temp[27];
    int l,r,len;
    fgets(s,sizeof(s),stdin);
    printf("%s",s);
    printf("enter l and r");
    scanf("%d %d",&l,&r);

    for(int i=l;i<=r;i++)
    {
        for(int j=65;j<=90;j++)
        {
            if((int)s[i]==j)
            {
                str=155-s[i];
                temp[i]=str;
            }
        }
    }
    len=strlen(temp);
    for (int i = 0, j = len - 1; i <= j; i++, j--)
        {
        char c = temp[i];
        temp[i] = temp[j];
        temp[j] = c;
    }
    printf("%s",temp);

    char word[4]={"aps"};
    printf("%s",word);
}
