#include<stdio.h>
int main()
{
	int n,i,t1=0,t2=1,nextt;
	printf("Enter the number");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("%d ",t1);
		nextt=t1+t2;
		t1=t2;
		t2=nextt;
	}
	return 0;
}
