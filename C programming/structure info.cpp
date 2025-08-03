#include<stdio.h>
#define size 50
struct info
{
	char name[size];
	int roll;
	long long int reg;
	float sgpa;
};
int main()
{
	struct info i;
	printf("Enter name :");
	gets(i.name);
	printf("Enter roll :");
	scanf("%d",&i.roll);
	printf("Enter Registration no :");
	scanf("%ld",&i.reg);
	printf("Enter SGPA of Last semester :");
	scanf("%f",&i.sgpa);
	printf("\nName:%s \n Roll No : %d \n Registration no : %lld \n SGPA of Last semester :%f",i.name,i.roll,i.reg,i.sgpa);
	return 0;
}
