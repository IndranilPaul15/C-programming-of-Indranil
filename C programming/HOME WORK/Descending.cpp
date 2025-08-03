#include<stdio.h>
int main()
{
	int i,j,k;
	int a[10];
	for(i=0;i<10;i++)
	{
		printf("enter element number %d :",i+1);
		scanf("%d",&a[i]);
	}
	for(i=0;i<10;i++)
	{
		for(j=i+1;j<10;j++)
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
	for(i=0;i<10;i++)
	{
		printf("%d, ",a[i]);
	}
	return 0;
}
