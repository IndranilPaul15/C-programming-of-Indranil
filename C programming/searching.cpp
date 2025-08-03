//Search any element from the array using C:
#include <stdio.h>

int searchElement(int arr[], int n, int element) {
    for (int i = 0; i < n; i++) 
	{
        if (arr[i] == element) 
		{
            return i;         
		}
    }
    return -1; 
}
int main() {
    int arr[100] = {1, 2, 3, 4, 5};
    int n = 5; 
    int elementToSearch = 3; 
    int index = searchElement(arr, n, elementToSearch);
    if (index != -1) 
	{
        printf("Element found at index %d\n", index);
    } else 
	{
        printf("Element not found in the array\n");
    }
    return 0;
}
