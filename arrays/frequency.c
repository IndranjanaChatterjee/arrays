#include<stdio.h>
int main()
{
	int j;
	int a[5];
	printf("enter the elements");
	int i;
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	int sum=0;
	for(i=0;i<5;i++)
	{
		sum=1;
		if(a[i]!=-1)
		{
		
		for(j=i+1;j<5;j++)
		{
			if(a[i]==a[j])
			{
				sum=sum+1;
				a[j]=-1;
			}
		}
		printf("%d %d",a[i],sum);
		printf("\n");
	    }
	}
	return 0;
	
}
