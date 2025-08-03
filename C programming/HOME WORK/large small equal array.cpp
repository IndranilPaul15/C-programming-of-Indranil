#include<stdio.h>
int main()
{
	int i,j,n;
	int a[10];
	for(i=0;i<10;i++)
	{
		printf("enter element number %d :",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<10;i++)
	{
		for(j=i+1;j<10;j++)
		{
			if(a[i]==a[j])
			printf("elements %d and %d are equal\n",i,j);
		}
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
