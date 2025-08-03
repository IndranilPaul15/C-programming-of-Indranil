#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *p,*set,size;
	printf("Enter the size of set:");
	scanf("%d",&size);
	if((set=(int*)malloc(size *sizeof(int)))==NULL)
	{
		printf("\nNO SPACE AVAILABLE\n");
		return 0;
	}
	printf("Address of the first byte is %u\n",set);
	printf("Input the values in set\n");
	for(p=set ;p<set+size;p++)
	{
		scanf("%d",p);
	}
	for(p=set+size-1;p>=set;p--)
	{
		printf("%d is stored at address %u\n",*p,p);
	}
	return 0;
}
