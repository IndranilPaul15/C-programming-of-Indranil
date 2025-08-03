//Insert a new element in any position in the array using C:
#include <stdio.h>
int insertElement(int arr[], int n, int position, int element) 
{
	for (int i = n - 1; i >= position; i--) 
	{
		arr[i+1] = arr[i]; 
	}
   	arr[position] = element;
}
int main() 
{
    int arr[100] = {1, 2, 3, 4, 5};
    int n=5,position,element; 
    printf("Enter the position the where you want to input an element:");
    scanf("%d",&position);
    if(position>5)
	{
		printf("Invalid position\n");
	}
    else
    {
    	printf("Enter the element that you want to input :");
    	scanf("%d",&element);
    	insertElement(arr, n, position, element);
    	n++; 
    	for (int i=0; i<n;i++) 
		{
    	    printf("%d ", arr[i]);
    	}
	}
    return 0;
}
