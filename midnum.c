/*
Name		: MERLIN MARIYAM REJI
Date		: 09/05/2024
Description	: Program to find the middle number
Sample input	: 5 1 9
Sample output	: 5
 */

#include <stdio.h>

int main()
{
    float num1, num2, num3;
    printf ("Enter num1 num2 and num3: ");
    scanf ("%f %f %f", &num1, &num2, &num3);

    if (num1 == num2 || num1 == num3 || num2 == num3)
    {
	printf ("Enter unique numbers only.\n");
	return 0;
    }

    if ((num1 > num2 && num1 < num3) || (num1 < num2 && num1 > num3))
    {
	printf("%g is the middle number.\n", num1);
    }
    else if ((num2 > num1 && num2 < num3) || (num2 < num1 && num2 > num3))
    {
	printf("%g is middle number.\n", num2);
    }
    else
    {
	printf("%g is the middle number.\n", num3);
    }
    return 0;
}

