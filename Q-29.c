// program to check whether a number is palidrome or not    
#include <stdio.h>
int main()    
{
    int num,sum=0,temp,q;
    printf("Enter a number: ");
    scanf("%d",&num);
    temp=num;
    while(num>0)
    {
        q=num%10;
        sum=(sum*10)+q;
        num=num/10;
    }
    if(temp==sum)
    {
    printf("palindrome number");
    }
    else
        {
    printf("not palindrome");
    }
}