// write a c program to find the value of given function

#include<stdio.h>
#include<math.h>
int main(){
	
    float x ,y;
    int n;
    printf("enetr a value of x:");
    scanf("%d",&x);
    printf("valuen of n:");
    scanf("%d",&n);
    
    if(n==1)
    {
    	printf("value of y=%d",1+x);
	}
	else if(n==2)
	{
		printf("value of y=%d",1+x/2);
	}
	else if(n==3)
	{
		printf("value of y=%d",1+pow(x,n));
    }
    else if(n>3||n<1)
    {
    	printf("value of y=%d",1+n*x);
	}
}