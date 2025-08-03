#include<stdio.h>
int main()
{
	int a,b,c,m;
	printf("Enter numbers \n");
	scanf("%d%d%d",&a,&b,&c);
	m=(a>b)?((a>c)?a:c):((b>c)?b:c);
	printf("THE GREATER IS %d",m);
	return 0;
}
