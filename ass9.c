/*WAP to display all the even number upto range given by users*/

#include<stdio.h>
int main()
{
	int n,i,c;
	printf("Enter your number: \n");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
	
		c = i%2;
		if(c==0)
		{
			printf("\neven number = :%d\n",i);
		}

	}
	
	
	
	
	
	
	}


