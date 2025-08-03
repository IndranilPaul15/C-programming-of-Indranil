#include<stdio.h>
int main()
{
	int n,x,y=1;
	printf("Please Enter any Number : ");
	scanf("%d",&x);
	for(n=1;n<=x;n++)
	{
		y=y*n;
	}
	printf("FACTORIAL OF THE INPUT NUMBER=%d",y);
    return 0;
}
