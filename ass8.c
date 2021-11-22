/*Enter wo number and perform the fooling operator using switc cas
1.press + to add two numbeers
2.press - to subtract two numbers
3.press / to divide two numbers
4.press * to multiply two numbers
*/
#include<stdio.h>
int main()
{
	int n1,n2,sum,sub,mul;
	float div;
	char  ch;
	printf("Choose any one operaor(+,-, *, /):\n");
	scanf("%c",&ch);
	
	switch(ch)
	{
		case '+':
		printf("Enter any two number\n");
		scanf("%d%d",&n1,&n2);
		sum = n1+n2;
		printf("Your sum is: %d ",sum);
		break;
		case '-':
		printf("Enter Any two number:\n");
		scanf("%d%d",&n1,&n2);
		sub = n1-n2;
		printf("your Subtraction is %d \n",sub);
		break;
		case '/':
		printf("Enter Any two number:\n");
		scanf("%d%d",&n1,&n2);
		div = n1/n2;
		printf("your Division is %f \n",div);
		break;
		case '*':
		printf("Enter Any two number:\n");
		scanf("%d%d",&n1,&n2);
		mul = n1-n2;
		printf("your Multiplication is %d \n",mul);
		break;
		default:
		printf("Error operator");
		
}
}
		
	
	
	 
	


