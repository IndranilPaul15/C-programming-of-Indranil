#include<stdio.h>
#include<math.h>
int main()
{
	int num,orgnum,rem,n=0,result=0;
	printf("Enter number ");
	scanf("%d",&num);
	orgnum=num;
	while(orgnum!=0)
	{
		orgnum=orgnum/10;
		n++;
	}
	orgnum=num;
	while(orgnum!=0)
	{
		rem=orgnum%10;
		result=result+pow(rem,n);
		orgnum=orgnum/10;
	}
	if(result==num)
	{
		printf("%d is armstrong",num);
	}
	else
	{
		printf("%d is not armstrong",num);
	}
	return 0;
}
