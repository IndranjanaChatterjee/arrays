#include<stdio.h>
int main()
{
	int n,i,p;
	int a[5];
	printf("enter the elements in the array");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
		
	}
	printf("reversing the array");
	int k=5/2;
	i=0;
	while(i<k)
	{
		p=a[4-i];
		a[4-i]=a[i];
		a[i]=p;
		i++;
	}
	for(i=0;i<5;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
}
