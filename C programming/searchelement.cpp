#include<stdio.h>
int main()
{
	int i,n,x=0,a[]={1,12,1637,23,34346,453,435,123,35,70,15,10,2004,02,03,45};
	printf("enter  your number :");
	scanf("%d",&n);
	for(i=0;i<16;i++)
	{
		if(n==a[i])
		printf("\n\n Element found at index %d",i);
		else
		{
	    	printf(" ELEMENT NOT FOUND");
		}
	}
	return 0;
}
