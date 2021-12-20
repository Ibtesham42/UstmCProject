//wap to find the sum of individual raws and individual colums
#include<stdio.h>
int main()
{
		int i,j,arr[20][20],n,m,sum,sumc;
		printf("Enter the size of raws");
		scanf("%d",&n);
		printf("Enter the size of columns");
		scanf("%d",&m);
		for(i=0;i<n;i++)
		{
			for(j=0;j<m;j++)
			{
				scanf("%d",&arr[i][j]);
			}
		}
		
		for(i=0;i<n;i++)
		{
		sum=0;
			for(j=0;j<m;j++)
			{
				sum+=arr[i][j];
			}
			printf("sum of raws %d = %d\n",i+1,sum);
		}
		printf("\n");
		
		for(i=0;i<m;i++)
		{
		sumc=0;
			for(j=0;j<n;j++)
			{
				sumc+=arr[j][i];
			}
			printf("sum of column %d =%d\n",i+1,sumc);
		}
		
}
