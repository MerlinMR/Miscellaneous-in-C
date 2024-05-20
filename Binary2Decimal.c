/*
Name		: MERLIN MARIYAM REJI
Date		: 20/05/2024
Description	: Program to convert binary to decimal
Sample input	: 1111
Sample output	: 15
 */

#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    char str[9];
    int out = 0, i, len;
    printf("Enter binary: ");
    scanf("%s", str);
    len = strlen(str);
    for (i=0; i<len; i++)
    {
	if (str[i] == '1')
	{
	    out = out + pow(2, len - 1 - i);
	}
    }
    printf("%d is the decimal value od %s.\n", out, str);
}
