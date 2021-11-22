/* WAP enter the marks of 5 subjects ,find percentage n calculate the gradeof a student*/

#include<stdio.h>
int main()
{
	int phy,math,chem,bio,eng;
	float per;
	
	printf("Enter phsics,maths,chemistry,biology and english marks");
	scanf("%d%d%d%d%d",&phy,&math,&chem,&bio,&eng);
	per = (phy+math+chem+bio+eng)/5;
	printf("percentage = %f\n ",per);
	if(per>=90)
	printf(" Grade A");
	else if(per>=75)
	printf("Grade B");
	else if(per>=55)
	printf("Grade C");
	else
	printf("Grade D");
}
