// print sum of individual digits of a number
#include <stdio.h>
int main()
{
    int num,sum=0,q;
    printf("Enter a number: ");
    scanf("%d",&num);
    while(num!=0)
    {
        q=num%10;
        sum=sum+q;
        num=num/10;
    }      
    printf("Sum of digits is: %d",sum);
}