#include <stdio.h>
int main() 
{
    float x1, y1, x2, y2, x3, y3;
    printf("Enter the coordinates of the first point (x1, y1): \n");
    scanf("%f %f", &x1, &y1);
    printf("Enter the coordinates of the second point (x2, y2): \n");
    scanf("%f %f", &x2, &y2);
    printf("Enter the coordinates of the third point (x3, y3): \n");
    scanf("%f %f", &x3, &y3);
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

