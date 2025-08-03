#include<stdio.h>
int printarray(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n");
}
int selectionSort(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		int key=i;
		for(int j=i+1;j<n;j++)
		{
			if(a[j]<a[key])//if(a[j]>a[key])
				key=j;
		}
		int temp=a[i];
		a[i]=a[key];
		a[key]=temp;
	}
}
int main()
{
	int x,a[1000];
	printf("Enter the no of elements in the array:");
	scanf("%d",&x);
	printf("Enter the elements of the array:\n");
	for(int i=0;i<x;i++)
	{
		scanf("%d",&a[i]);
	}
	printf(" the elements of the array before sorting:\n");
	printarray(a,x);
	selectionSort( a, x);
	printf(" the elements of the array before sorting:\n");
	printarray(a,x);
	return 0;
}

