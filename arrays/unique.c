#include<stdio.h>
int main()
{
	int a[5];
	int n=0,i,j;
	int sum=0;
	printf("enter the elemnts");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++)
	{
		if(a[i]!=-1)
		{
		
		for(j=i+1;j<5;j++)
		{
			if(a[i]==a[j])
			{
				n=1;
				a[j]=-1;
			}
		}
		if(n==0)
		{
			++sum;
		}
		n=0;
	    }
	}
	printf("number of unique elements %d",sum);
	return 0;
}
