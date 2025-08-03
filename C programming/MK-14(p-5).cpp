#include<stdio.h>
int main()
{
	int n=1,x,y=1;
	printf("Please Enter any Number : ");
	scanf("%d",&x);
	while(n<=x)
	{
		y=y*n;
		n++;
	}
	printf("FACTORIAL OF THE INPUT NUMBER=%d",y);
 return 0;
}
