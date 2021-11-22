/* WAP to find the max of three numbers using if else condition */


#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Ener first number\n");
	scanf("%d",&a);
	printf("Ener Second number\n");
	scanf("%d",&b);
	printf("Ener third number\n");
	scanf("%d",&c);	
	if(a>b && a>c)
	{
		printf("First number is Greater");
	}
	else if(b>a && b>c)
	{
		printf("Second number is greater");
		
	}
	else
	printf("Third number is greater");
	
}
