#include<stdio.h>
union un
{
	int a,b;
	
}var1;
union x
{
	char c;
}var2;
int main()
{
	var1.a=15;
	var2.c ='i';
	printf("%d\n%c",var1.b,var2.c);
	return 0;
}
