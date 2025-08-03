//Delete an element from any position in the array using C:
#include <stdio.h>

int deleteElement(int arr[], int n, int position) 
{
    for (int i = position; i < n - 1; i++) 
	{
        arr[i] = arr[i + 1];
    }
}
int main() 
{
    int arr[100] = {1, 2, 3, 4, 5};
    int n=5,position ;
    printf("Enter the position the where you want to delete an element:");
    scanf("%d",&position);
    if(position>=5)
	{
		printf("Invalid position\n");
	}
    else
    {
    	deleteElement(arr, n, position);
	    n--; 
	    for (int i = 0; i < n; i++) 
		{
	        printf("%d ", arr[i]);
	    }
	}
    return 0;
}
