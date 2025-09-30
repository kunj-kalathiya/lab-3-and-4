#include<stdio.h>
int main()
{
   int n,sum,j,i;
   printf("enter a number");
   scanf("%d",&n);
   sum=n;
   for (i=0;sum>9;i++)
     {
      n=sum;
      sum=0;
      for (j=0;n>0;j++)
      {
      sum=sum+n%10;
      n=n/10;
      }
     printf("%d\n",sum);
     }
     printf("final sum =%d",sum);
}
