/*
Name		: MERLIN MARIYAM REJI
Date		: 05/15/2024
Description	: Print out the unique/non repeating elements in an array
Sample input	: 1 2 3 1 4 6 2 5 7
Sample output	: 3 4 6 5 7
 */

#include <stdio.h>

int main()
{
    int i, j, size, count = 0;
    printf("Enter size of the array: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter the array elements: ");
    for(i=0; i<size; i++)
    {
	scanf("%d", &arr[i]);
    }

    printf("Unique elements are: ");
    for (i=0; i<size; i++)
    {
	for (j=0; j<size; j++)
	{
	    if (arr[i] == arr[j])
	    {
		count++;
	    }
	}
	if (count == 1)
	{
	    printf("%d ", arr[i]);
	}
	count = 0;
    }
    return 0;
}


