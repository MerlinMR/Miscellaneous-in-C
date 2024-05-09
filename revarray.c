/*
Name		: MERLIN MARIYAM REJI
Date		:
Description	:
Sample input	:
Sample output	:
 */

#include <stdio.h>

int rev(int a[], int n)
{
    int i, temp;
    for (i=0; i<n/2; i++)
    {
	temp = a[i];
	a[i] = a[n-i-1];
	a[n-i-1] = temp;
    }
}

int main()
{
    int n, i;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the array elements: ");
    for (i=0; i<n; i++)
    {
	scanf("%d", &arr[i]);
    }
    rev (arr, n);

    for (i=0; i<n; i++)
    {
	printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
