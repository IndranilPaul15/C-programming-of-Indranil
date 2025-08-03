#include<stdio.h>
#include<math.h>
int main()
{
	int n,x,y,sum=0;
	printf("Enter number ");
	scanf("%d",&n);
	for(x=2;x<=n;x++)
	{
		for(y=2;y<=n;y++)
		{
			sum=pow(x,y)+pow(y,x);
			if(sum==n)
			{
				printf("%d is a layland number",n);
				return 0;
			}
		}
	}
	printf("%d is not a layland number",n);
	return 0;
}
