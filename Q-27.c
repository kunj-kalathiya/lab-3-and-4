// check whether a number is prime or not

#include<stdio.h>
int main(){
    
    int num,q,i;
    printf("enter a num:");
    scanf("%d",&num);
    
    for(i=2;i<num&&q!=0;i++)
    {
    q=num%i;
    }
    
    if(q==0)
    {
      printf("number is not prime");
    }
    else
    {
      printf("number is prime");
    }
}