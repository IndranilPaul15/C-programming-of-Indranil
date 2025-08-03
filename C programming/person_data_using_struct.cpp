#include<stdio.h>
typedef int gublu;
 struct personal
{
	char name[100];
	gublu day;
	char month[10];
	gublu year;
	float salary;
};
typedef struct personal p;//changes anme of structure tag
gublu main()
{
	p person;
	printf("Enter Name ,Date of birth and monthly salary\n");
	gets(person.name);
	scanf(" %d %s %d %f",&person.day,person.month,&person.year,&person.salary);
	printf(" Name:");
	puts( person.name);
	printf(" DOB: %d-%s-%d \n Salarly: %.2f",person.day,person.month,person.year,person.salary);
	return 0;
}
