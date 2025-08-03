#include<stdio.h>
int main()
{
	int i,j,k,n;
	int a[10];
	printf("Enter the no of elements in the array:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter element number %d :",i+1);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]<a[j])
			{
				k=a[i];
				a[i]=a[j];
				a[j]=k;
			}
		}
	}
	printf("\n\nDescending Order : \n");
	for(i=0;i<n;i++)
	{
		printf("%d, ",a[i]);
	}
	return 0;
}
