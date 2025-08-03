#include<stdio.h>
int main()
{
	float n;
	printf("Enter Marks: ");
	scanf("%f",&n);
	if(n>=90)
	{
		printf("Has got GRADE : O");
	}
	else
	{
		if(n>=80&&n<90)
		{
			printf("Has got GRADE : E");
		}
		else
		{
			if(n>=70&&n<80)
			{
				printf("Has got GRADE : A");
			}
			else
			{
				if(n>=60&&n<70)
				{
					printf("Has got GRADE : B");
				}
				else
				{
					if(n>=50&&n<60)
					{
						printf("Has got GRADE : C");
					}
					else
					{
						if(n>=40&&n<50)
						{
							printf("Has got GRADE : D");
						}
						else
						{
							if(n<40)
							{
								printf("Has got GRADE : F");
							}
						}
					}
				}
			}
		}
	}
	return 0;
}
