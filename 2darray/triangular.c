#include<stdio.h>
int main()
{
	int a[3][3];
	int i,j;
	printf("enter elements");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	
	int sumright=0,sumleft=0;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(i==j)
			{
				sumleft+=a[i][j];
			}
			if((i+j)==2)
			{
				sumright+=a[i][j];
			}
		}
	}
	printf("sum of left diagonal %d",sumleft);
	printf("sum of left diagonal %d",sumright);
	printf("lower triangular\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(i>j)
			{
				printf("%d",a[i][j]);
				
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
	printf("upper triangular\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(j>i)
			{
				printf("%d",a[i][j]);
				
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
	return 0;
}
