#include <stdio.h>
int main() 
{
	//Write a C program to check whether a Character is Alphabet or not. 
    char c;
    printf("Enter a character: ");
    scanf("%c", &c);
    if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) 
	{
        printf("%c is an alphabet.", c);
    } 
	else 
	{
        printf("%c is not an alphabet.", c);
    }
    return 0;
}

