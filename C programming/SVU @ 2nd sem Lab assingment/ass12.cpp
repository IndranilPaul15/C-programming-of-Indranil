#include<stdio.h>
int main()
{
	// Write a C program to calculate the Area and Perimeter of a Rectangle.
	int H, W, area , perimeter ;
	printf("Please enter the value of Height & width to calculate the Area and Perimeter of a Rectangle\n:");
	scanf("%d%d",&H ,&W);
	area=H*W , perimeter=2*(H+W);
	printf("\nAREA = %d unit^2  \nPERIMETER = %d unit \nThank you",area,perimeter);
	return 0;
}
