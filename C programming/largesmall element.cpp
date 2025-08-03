#include<stdio.h>
int main()
{
	int i,n;
	int a[10];
	for(i=0;i<10;i++)
	{
		printf("enter element number %d :",i+1);
		scanf("%d",&a[i]);
	}
	for(i=1;i<10;i++)
	{
		if(a[0]>a[i])
		{
			a[0]=a[i];
		}
	}
	printf("Smallest element= %d\n",a[0]);
	for(i=1;i<10;i++)
	{
		if(a[0]<a[i])
		{
			a[0]=a[i];
		}
	}
	printf("Largest element= %d",a[0]);
	return 0;
}
