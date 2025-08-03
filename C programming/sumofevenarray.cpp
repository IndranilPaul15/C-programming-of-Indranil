#include<stdio.h>
int main()
{
	int i,n,x=0;
	int a[10];
	for(i=0;i<10;i++)
	{
		printf("enter element number %d :",i+1);
		scanf("%d",&a[i]);
		if(a[i]%2==0)
		x=(x+a[i]);
	}
	printf("SUM OF THE EVEN ELEMENTS=%d",x);
	return 0;
}
