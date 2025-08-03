#include<stdio.h>
struct str1
{
	int a;
	char c;
};
struct str2
{
	int a : 5;
	char c;
};
int main()
{
	printf("size of str1: %d\nsize of str2: %d",sizeof(struct str1),sizeof(struct str2));
	return 0;
}
//why value not changing - compiler is 64 bit

