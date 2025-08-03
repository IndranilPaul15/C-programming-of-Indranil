#include<stdio.h>
int main()
{
	int i,n,x=0, a[10];
	for(i=0;i<10;i++)
	{
		printf("enter element number %d :",i+1);
		scanf("%d",&a[i]);
	}
	for(i=0;i<10;i++)
	{
		if(a[i]==0)
		{
			printf("ELEMENT %d IS ZERO \n",i+1);
		}
	}
	printf("\n\n");
	for(i=0;i<10;i++)
	{
		if(a[i]>0)
		{
			printf("ELEMENT %d IS POSITIVE \n",i+1);
		}
	}
	printf("\n\n");
	for(i=0;i<10;i++)
	{
		if(a[i]<0)
		{
			printf("ELEMENT %d IS NEGATIVE \n",i+1);
		}
	}
	return 0;
}
