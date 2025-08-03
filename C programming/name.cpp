#include<stdio.h>
int main()
{
	char n;
	printf("Pls enter character:");
	scanf("%c",&n);
	if(n=='a')
	{
		printf("INDRANIL");
	}
	else
	{
		if(n=='b')
		{
			printf("RAM");
		}
		else
		{
			printf("%c",n);
		}
	}
	return 0;
}
