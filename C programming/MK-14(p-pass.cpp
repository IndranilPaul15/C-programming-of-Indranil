#include<stdio.h>
int main()
{
	int n=1,password;
	while(n<=3)
	{
		printf("INPUT THE PASSWORD :\n");
		scanf("%d",&password);
		if(password==7777)
		{
			printf("CORRECT PASSWORD \nTHANK YOU");
			break;
		}
		else
		{
			printf("INCORRECT PASSWORD,TRY AGAIN , CHANCE LEFT %d\n",3-n);
		}
		n++;
	}
	return 0;
}
