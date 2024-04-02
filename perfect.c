/*
Name		: MERLIN MARIYAM REJI
Date		: 02/04/2024
Description	: Program to check perfect number or not
Sample input	: 6
Sample output	: 6 is a perfect number
*/

//Perfect number is a positive integer that is equal to the sum of its positive divisors, excluding the number itself

#include <stdio.h>

int perfect(int num)
{
    int i, sum = 0;
    for (i=1; i<num; i++)
    {
	if (num%i == 0)
	{
	    sum = sum + i;
	}
    }
    if (sum == num)
    {
	return 1;
    }
    else
    {
	return 0;
    }
}

int main()
{
    int num;
    printf("Enter the number to check: ");
    scanf("%d", &num);

    if (perfect(num))
    {
	printf("%d is a perfect number.\n", num);
    }
    else
    {
	printf("%d is not a perfect number.\n", num);
    }

    return 0;
}


