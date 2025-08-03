#include<stdio.h>
int main()
{
	int H=6, W=5, area , perimeter ;
	printf("Please enter the value of Height & width \n:");
	scanf("%d%d",&H ,&W);
	area=H*W , perimeter=2*(H+W);
	printf(" AREA = %d cm^2  \nPERIMETER = %d cm \nThank you",area,perimeter);
	return 0;
}
