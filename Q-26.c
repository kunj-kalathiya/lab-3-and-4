/*  program to print sum of all odd and even no b/w 1 to N */

#include<stdio.h>
int main(){
    int num,i, evensum=0,oddsum=0;
    printf("enter a num:");
    scanf("%d",&num);
  if(num%2!=0)
  {
     
    for(i=1;i<=num;i+=2)
    {
     oddsum=oddsum+i;
    }
    printf("odd sum=%d\n",oddsum);
    
    for(i=2;i<num;i+=2)
    {
    evensum=evensum+i;
    }
    printf("even sum=%d",evensum);
    
  }
  else
  {
      for(i=2;i<=num;i+=2)
      {
      evensum=evensum+i;
      }
       printf("even sum=%d\n",evensum);
       
      for(i=1;i<num;i+=2)
      {
      oddsum=oddsum+i;
      }
    printf("odd sum=%d\n",oddsum);
    
  }
}