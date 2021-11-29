/*WAP to check a number a prime or not */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n,flag=0;
    printf("Enter your number ?\n");
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            flag=1;
        }

    }
    if(flag==0)
    {
        printf("Your number %d : is prime\n",n);
    }
    else{
        printf("Your number %d :is not prime\n",n);
    }
}
