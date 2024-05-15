/*
Name		: MERLIN MARIYAM REJI
Date		: 15/05/2024
Description	: Program to reverse a string
Sample input	: What Plans Love ?
Sample output	: ? evoL snalP tahW
 */

#include <stdio.h>
#include <string.h>

int main()
{
    int i;
    char str[50], temp;
    printf("Enter the string to be reversed : ");
    scanf("%[^\n]", str);
    printf("String b4 reversal is %s.\n", str);
    for (i=0; i<strlen(str)/2; i++)
    {
	temp = str[i];
	str[i] = str[strlen(str)-i-1];
	str[strlen(str)-i-1] = temp;
    }
    printf("String after reversal is %s.\n", str);
    return 0;
}
