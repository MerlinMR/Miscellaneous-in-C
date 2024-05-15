/*
Name		: MERLIN MARIYAM REJI
Date		: 05/15/2024
Description	: Program to print maximum of each row in a 2D array
Sample input	:
Sample output	:
 */

#include <stdio.h>

int main()
{
    int i, j, row, column, largest = 0;
    printf("Enter no. of rows of the array: ");
    scanf ("%d", &row);
    printf("Enter no. of columns of the array: ");
    scanf("%d", &column);

    int arr[row][column];
    printf("Enter the elements: ");
    for (i=0; i<row; i++)
    {
	for (j=0; j<column; j++)
	{
	    scanf("%d", &arr[i][j]);
	}
    }

    for (i=0; i<row; i++)
    {
	for (j=0; j<column; j++)
	{
	    if (arr[i][j] > largest)
	    {
		largest = arr[i][j];
	    }
	}
	printf("Largest element in row %d is %d.\n", i+1, largest);
	largest = 0;
    }
}

