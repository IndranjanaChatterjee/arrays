#include<stdio.h>
int main()
{
	int max,min;
	int a[5];
	printf("enter the elements");
	int i;
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	max=a[0];
	min=a[0];
	for(i=0;i<5;i++)
	{
		max=(a[i]>max)?a[i]:max;
		min=(a[i]<min)?a[i]:min;
	}
	printf("max %d min %d",max,min);
	return 0;
}
