#include<stdio.h>
int main()
{
	int n=1,x,y=1;
	printf("Please Enter any Number : ");
	scanf("%d",&x);
	do
	{
		y=y*n;
		n++;
	}
	while(n<=x);
	printf("FACTORIAL OF THE INPUT NUMBER=%d",y);
    return 0;
}
