#include<stdio.h>

void main()
{
   int a[10][10],i,j;

   for(i=0;i<3;i++)
   {
       for(j=0;j<3;j++)
       {
           scanf("%d",&a[i][j]);
       }
   }

   int max=0,res[10],min;


   for(i=0;i<3;i++)
   {
       for(j=0;j<3;j++)
       {
           if(a[i][j]>max)
           {
               max=a[i][j];
           }
       }
       res[i]=max;
       printf("max:%d\n",res[i]);
   }

   for(i=0;i<3;i++)
   {
       min=a[i][0];
       for(j=0;j<3;j++)
       {
           if(a[i][j]<min)
           {
               min=a[i][j];
           }
       }
       printf("min:%d\n",min);
   }


}
