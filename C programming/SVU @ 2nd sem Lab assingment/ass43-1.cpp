#include<stdio.h>
int main()
{
	int x1,x2,x3,y1,y2,y3;
	printf("Enter X1 and Y1: \n");
	scanf("%d%d",&x1,&y1);
	printf("Enter X2 and Y2: \n");
	scanf("%d%d",&x2,&y2);
	printf("Enter X3 and Y3: \n");
	scanf("%d%d",&x3,&y3);
	if ((y2 - y1) / (x2 - x1) == (y3 - y2) / (x3 - x2)) 
	{
        printf("The three points lie on a straight line.\n");
    } 
	else 
	{
        printf("The three points do not lie on a straight line.\n");
    }
    return 0;
}
