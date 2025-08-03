#include <stdio.h>

int main()
{
	 // Convert marks into grades using switch case
    int marks;
    printf("Enter your marks: ");
    scanf("%d", &marks);   
    switch(marks/10) {
        case 10:
        	{
        		if(marks>100)
        		{
        			printf("Invalid input\n");
           			break;	
				}
				else
				{
					printf("Your grade is A\n");
          			break;
				}
			}
        case 9:
            printf("Your grade is A\n");
            break;
        case 8:
            printf("Your grade is B\n");
            break;
        case 7:
            printf("Your grade is C\n");
            break;
        case 6:
            printf("Your grade is D\n");
            break;
        default:
            printf("Your grade is F\n");
    }
    return 0;
}

