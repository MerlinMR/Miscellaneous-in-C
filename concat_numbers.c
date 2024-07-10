/*
Name		: MERLIN MARIYAM REJI
Date		: 10/07/2024
Description	: WAP to Concatenate the numbers
Sample input	: 12345 67890
Sample output	: 1627384950
 */

#include <stdio.h>

//IF TAKING IN AS STRING
#include <string.h>

int main()
{
    char num1[10], num2[10];

    printf("Enter num1: ");
    scanf("%s", num1);
    int len1 = strlen(num1);

    printf("Enter num2: ");
    scanf("%s", num2);
    int len2 = strlen(num2);

    int len = len1+len2;
    char result[len+1];
    int index = 0;
    int i, j;

    //WILL RUN TILL EITHER OF ALL DIGITS ARE COPIED
    for(i=0, j=0; i<len1 && j<len2; i++, j++)
    {
	result[index++] = num1[i];
	result[index++] = num2[j];
    }

    //WILL COPY IF ANY DIGITS ARE LEFT
    while (i<len1)
    {
	result[index++] = num1[i];
	i++;
    }
    while (j<len2)
    {
	result[index++] = num2[j];
	j++;
    }

    result[len] = '\0';
    printf("%s\n", result);

}
