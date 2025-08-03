#include<stdio.h>
printarray(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
}
bubblesort(int a[],int n)
{
	int i,j,temp;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-1-i;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
}
int main()
{
	int a[1000],n,i,j;
	printf("Enter number of elements:");
	scanf("%d",&n);
	printf("Enter elements :\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("your elements before sorting \n");
	printf("%d",printarray(a,n));
	bubblesort(a,n);
	printf("\nyour elements after sorting \n");
	printf("%d",printarray(a,n));
	return 0;
}
