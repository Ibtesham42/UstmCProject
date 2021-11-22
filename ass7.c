/* WAP to check a character is alphabet or not & then check an alphabet is vowel or consonant using switch case */

#include<stdio.h>
#include<ctype.h>
int main()
{
	char ch;
	printf("Enter your character:\n");
	scanf("%c",&ch);
	if(isalpha(ch))
	{
		printf("your character is alphabet\n");
		
	switch(ch)
	{
		case 'a': case 'A':case 'e':
		case 'E':
		case 'i':
		case 'I':
		case 'o':
		case 'O':
		case 'u':
		case 'U':
		
		
		printf("Its a vowel\n");
		break;
		default:
		printf("your character is not vowel\n");
		
	}
	}
	else
	printf("Its not a alphabet");
		
	}
	


