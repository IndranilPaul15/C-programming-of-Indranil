#include<stdio.h>
int search(int a[],int n);
int main()
{
	int a[100],n,i,item;
	printf("Enter the no of elements : ");
	scanf("%d",&n);
	printf("Enter the elements: \n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	int result = search(a,n);
	(result==-1)?printf("Element %d found at index %d",item,result):printf("Element not found at any index");
	return 0;
}
search(int a[],int n)
{
	int i,item;
	printf("Enter the element you want to search :");
	scanf("%d",&item);
	for(i=0;i<n;i++)
	{
		if(a[i]==item)
			return i;
		else
			return -1;
	}	
}
