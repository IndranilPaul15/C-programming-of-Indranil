//Update an element at any specific position in the array using C:
#include <stdio.h>
int updateElement(int arr[], int position, int newElement) 
{
    arr[position] = newElement;
}
int main() 
{
    int arr[100] = {1, 2, 3, 4, 5};
    int position ,newElement; 
    printf("Enter the position the where you want to update an element:");
    scanf("%d",&position);
    if(position>=5)
	{
		printf("Invalid position\n");
	}
    else
    {
    	printf("Enter the element that you want to update :");
    	scanf("%d",&newElement);
    	updateElement(arr, position, newElement);
	    for (int i = 0; i < 5; i++) 
		{
	        printf("%d ", arr[i]);
			printf("\n");
	    }
	}
    return 0;
}
