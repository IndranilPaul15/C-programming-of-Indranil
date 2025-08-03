#include<stdio.h>
int main()
{
	int i,x1,y1,x2,y2,x3,y3;
	printf("Input first point x1&y1\n");
	scanf("%d%d",&x1,&y2);
	printf("Input second point x2&y2\n");
	scanf("%d%d",&x2,&y2);
	printf("Input first point x3&y3\n");
	scanf("%d%d",&x3,&y3);
	i=x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2);
	if(i==0)
	{
		printf("yes!\n The points lie on a straight line");
	}
	else
	{
		printf("NO!\n The points do not lie on a straight line");
	}
	return 0;
}
