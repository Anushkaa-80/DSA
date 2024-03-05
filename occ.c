#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{int L,cnt=0;
 scanf("%d",&L);

char str[L+1];

gets(str);

for(int i=0;i<strlen(str);i++)
{
    if(str[i]=='a' && str[i+1]=='p' && str[i+2]=='s')
    {
        cnt++;
    }
    else if(str[i]=='a' && str[i+1]==' ' && str[i+2]=='p' && str[i+3]=='s')
    {
        cnt++;
    }
        else if(str[i]=='a' && str[i+1]==' ' && str[i+2]=='p'  && str[i+3]==' ' && str[i+4]=='s')
        {
            cnt++;
        }
   else if(str[i]=='a'  && str[i+1]=='p' && str[i+2]==' ' && str[i+3]=='s')
    {
        cnt++;
    }
    else
    {

    }

}
 printf("%d",cnt);
}
