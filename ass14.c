//wap to check a number is armstrong or not
#include<stdio.h>
#include<math.h>
int main()
{
	int n,n1,ctr=0,sum=0,rem;
	printf("Enter your number\n");
	scanf("%d",&n);
	n1=n;
	while(n>0)
	{
		rem=n%10;
		ctr++;
		n/=10;
		
	}
	n=n1;
	while(n>0)
	{
		rem=n%10;
		sum+=pow(rem,ctr);
		n/=10;
		
	}
	if(n1==sum){
	printf("The number is Armstrong\n");
	}
	else
	{
		printf("Number is not Armstrong\n");
	}
}
