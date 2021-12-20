//wap reverse a number
#include<stdio.h>
int main()
{
	int rev=0,rem,n,i;
	printf("enter your range\n");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		while(n>0)
		{
		rem = n%10;
		rev=rev*10+rem;
		n=n/10;
	}
	printf("%d",rev);
	}
	
}
