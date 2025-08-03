#include<stdio.h>
#include<math.h>
int main()
{
	int num,limit,orgnum,rem,result,n=0;
	printf("Enter number");
	scanf("%d",&limit);
	for(num=1;num<=limit;num++){
	orgnum=num;
	result=0;
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
		printf("%d is armstrong number\n",num);
	}
	n=0;
}
	return 0;
}
