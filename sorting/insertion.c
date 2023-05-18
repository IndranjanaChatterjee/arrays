#include<stdio.h>
int main()
{
	int n,k;
	int a[5];
	int i;
	printf("enter elements");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++)
	{
		n=a[i];
		k=i-1;
		while(k>=0 && a[k]<n)
		{
			a[k+1]=a[k];
			--k;
		}
		a[++k]=n;
	}
	printf("Sorted in descending order");
	for(i=0;i<5;i++)
	{
		printf("%d",a[i]);
	}
	return 0;
}
