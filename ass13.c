//wap to find the Fibonacci series upto the range given by the user
#include<stdio.h>
int main()
{
	int f1=0,f2=1,f3,n,i;
	printf("Enter your range\n:");
	scanf("%d",&n);
	printf("%d %d ",f1,f2);
	for(i=2;i<n;i++)
	{
		f3=f1+f2;
		printf(" %d ",f3);
		f1=f2;
		f2=f3;
	}
	
	
}
