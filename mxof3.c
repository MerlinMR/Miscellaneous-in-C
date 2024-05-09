/*
Name		: MERLIN MARIYAM REJI
Date		: 09/05/2024
Description	: Program to find maximum of 3 numbers
Sample input	: 2 7 0.1
Sample output	: 7
 */

#include <stdio.h>

int main()
{
    float num1, num2, num3;
    printf("Enter num1: ");
    scanf("%f", &num1);
    printf("Enter num2: ");
    scanf("%f", &num2);
    printf("Enter num3: ");
    scanf("%f", &num3);

    if (num1 >= num2 && num1 >= num3)
    {
	    printf("%g is the maximum.\n", num1);
    }
    else if (num2 >= num1 && num2 >= num3)
    {
	    printf("%g is the maximum.\n", num2);
    }
    else
    {
	printf("%g is the maximum.\n", num3);
    }
    return 0;
}
