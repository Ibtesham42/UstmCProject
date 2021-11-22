/* WAP enter 2 no. and perform the following operator using if else 
1.press + to add numbers
2.press - to subtract
3.press / to divide
4.press * to multiply
*/

#include<stdio.h>
int main()
{
	int num1,num2,sum,sub,mult;
	char ch;
	float div;
	printf("Enter any two number \n");
	scanf("%d%d",&num1,&num2);
	printf("Enter your Choice \n:+\n-\n/\n*\n");
	ch=getchar();
	scanf("%c",&ch);
	if(ch =='+')
	{
	sum = num1+num2;
	printf("your Sum is %d ",sum);
	}
	else if(ch =='-')
	{
		sub = num1-num2;
		printf("Your Subtraction is %d",sub);
	}
	else if(ch=='/')
	{
		div=(float)num1/num2;
		printf("Your Division number is %f",div);
	}
	else if(ch=='*')
	{
		mult = num1*num2;
		printf("Your Multiplication number is %d ",mult);
		
	}
}
	
	
