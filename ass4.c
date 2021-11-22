/*WAP to find the max of 3 numbers using conditional operator*/

#include<stdio.h>
void main()
{
	int a , b,c,max;
	printf("Enter Any Three Number \n");
	scanf("%d%d%d",&a,&b,&c);
	max=((a>b && a>c)? a:(b>a && b>c?b:c));
	printf("The Maximun number is %d",max);
	
}
