// program to check whether a number is armstrong or not

#include<stdio.h>
int main()
{
    int num,i,sum=0,q,temp;
    printf("Enter a number: ");
    scanf("%d",&num);
    temp=num ;
    for(i=1;num>0;i++)
    {
        q=num%10;
        num=num/10;
        sum=sum+q*q*q;

    }
    if(sum==temp)
        printf("Armstrong number");
    else
        printf("Not an Armstrong number");  
}