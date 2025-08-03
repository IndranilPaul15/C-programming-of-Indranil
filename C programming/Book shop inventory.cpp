#include<stdio.h>
struct record
{
	char author[50];
	char title[100];
	float price;
	struct
	{
		char month[10];
		int year;
	}date;
	char publisher[50];
	int qnt;
};
int check(struct record table[],char s1[],char s2[],int m);
int main()
{
	char author[50],title[100],res[10];
	int i,n,qnt;
	struct record book[]={
	{"Ritche","C language",450,"May",1977,"PHI",10},
	{"Balagurusamy","Basic",390,"January",1984,"THM",0}
	};
	n=sizeof(book)/sizeof(struct record);
	do
	{
		printf("Enter title and author name \n");
		printf("Title:");
		gets(author);
		printf("Author:");
		gets(author);
		i=check(book,title,author,n);
		if(i!=-1)
		{
			
		}
	}
	
}
