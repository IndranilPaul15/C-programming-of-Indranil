#include<stdio.h>
int main()
{
	int i,n,x=0, a[10];
	for(i=0;i<10;i++)
	{
		printf("enter element number %d :",i+1);
		scanf("%d",&a[i]);
	}
	printf("\n\nREVERSE SEQUENCE IS \n");
	for(i=0;i<10;i++)
	{
		printf("%d  ,",a[9-i]);
	}
	return 0;
}
