#include<stdio.h>
int main()
{
	int n,a[100],i;
	printf("Enter the no of elements in the array:");
	scanf("%d",&n);
	printf("Enter the elements of the array:\n");
//	for(i=0;i<n;i++)
//	{
//		scanf("%d ",&a[i]);
//	}
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	
	return 0;
}
