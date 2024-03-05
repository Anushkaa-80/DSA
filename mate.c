#include<stdio.h>

void main()
{
    int pref[10][10],n,cnt=0,cnt1=0;
    scanf("%d",&n);

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            scanf("%d",&pref[i][j]);
        }

    }

    for(int i=0; i<n; i++)

    {

        for(int j=0; j<n; j++)

        {

            if(pref[i][j]!=-1)
            {
                cnt++;
             //   printf("%d",cnt);
            }
            else if(pref[i][j]==-1)
            {

                cnt1++;
               // printf("%d",cnt1);
                break;
            }
            else
            {

            }
        }
    }
    if(cnt==n*n)
        printf("-1");
    else
        printf("%d",cnt1);
}
