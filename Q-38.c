// program to  print 1,4,9,16...

#include<stdio.h>
int main ()
{
   int i=1,num;
   printf("enter No to print");
   scanf("%d",&num);
   
   while (i<=num)
  {
   printf("\n%d",i*i);
   i++;
   }
}
    