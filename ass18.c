//wap to find the sum of two 1D array and store it in 3rd 1D array
#include<stdio.h>
int main()
{
	int i,j,n,arr[100],arr2[100],sum[100];
	printf("Enter array size\n");
	scanf("%d",&n);
	printf("Enter elements for First Array\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter elements for 2nd Array\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr2[i]);
	}
	for(i=0;i<n;i++)
	{
		sum[i]=arr[i]+arr2[i];
	}
	printf("Sum of array is:-");
	for(i=0;i<n;i++)
	{
		printf("\n %d ",sum[i]);
	}
	
	

}
