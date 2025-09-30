#include<stdio.h>
#include <limits.h>
int main()
{
	int i,max, j,n, smax,count=0;
	printf("enter range of arrey");
	scanf("%d",&n);
	int num[n];
	for(i=0;i<n;i++)
	{
    	scanf("%d",&num[i]);
	}
	max=num[0];
	for(i=0;i<n;i++)
	{
    	if(max<num[i])
    	max=num[i];
	}
	printf("max=%d\n",max);
 	smax=INT_MIN;
	for(i=0;i<n ;i++)
	{
    	if(num[i]<max && num[i]>smax)
    	smax=num[i];
	}
	printf("second max=%d",smax);
}

