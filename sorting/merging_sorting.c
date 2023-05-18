#include<stdio.h>
int main()
{
	int n,m;
	printf("enter the values of n and m");
	scanf("%d%d",&n,&m);
	int a[n],b[m];
	int i,j;
	printf("enter the elements in the array");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<m;i++)
	{
		scanf("%d",&b[i]);
	}
	int arr[n+m];
	for(i=0;i<n;i++)
	{
		arr[i]=a[i];
	}
	for(i=0;i<m;i++)
	{
		arr[n+i]=b[i];
	}
	printf("Merged array");
	for(i=0;i<(n+m);i++)
	{
	   printf("%d",arr[i]);
	}
	int k,min;
	printf("\n");
	printf("sorted array using bubble sort");
	for(i=0;i<((n+m)-1);i++)
	{
		for(j=0;j<(((n+m)-1)-i);j++)
		{
			if(arr[j]<arr[j+1])
			{
				k=arr[j+1];
				arr[j+1]=arr[j];
				arr[j]=k;
			}
		}
	}
	for(i=0;i<(n+m);i++)
	{
	   printf("%d",arr[i]);
	}
	printf("\n");
	printf("sorted array using selection sort");
	for(i=0;i<((n+m)-1);i++)
	{
		min=i;
		for(j=i+1;j<(n+m);j++)
		{
			if(arr[j]<arr[min])
			{
				min=j;
			}
		}
		k=arr[i];
		arr[i]=arr[min];
		arr[min]=k;
	}
	for(i=0;i<(n+m);i++)
	{
	   printf("%d ",arr[i]);
	}
	return 0;
	
	
}
