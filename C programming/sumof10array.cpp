#include<stdio.h>
int main()
{
	int i,n;
	float x=0;
	int a[10];
	for(i=0;i<10;i++)
	{
		printf("enter element number %d :",i+1);
		scanf("%d",&a[i]);
		x=(x+a[i]);
	}
	printf("SUM OF THE INPUT ELEMENTS=%f",x);
	return 0;
}
