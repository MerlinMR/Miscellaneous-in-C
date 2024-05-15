/*
Name		: MERLIN MARIYAM REJI
Date		: 15/05/2025
Description	: Program to convert decimal to hexadecimal
Sample input	: 255
Sample output	: 0xFF
 */


#include <stdio.h>

int main()
{
    int hex[] = {'A', 'B', 'C', 'D', 'E', 'F'};
    char hexnum[256], temp;
    int num=0, len=0, remainder, j;

    printf("Enter the number to be convert to hexadecimal: ");
    scanf("%d", &num);

    while(num!=0)
    {
	remainder = num%16;
	if (remainder < 10)
	{
	    hexnum[len] = remainder + '0';
	}
	else
	{
	    hexnum[len] = hex[remainder - 10];
	}
	len++;
	num=num/16;
    }
    hexnum[len] = '\0';

    for(j=0; j<len/2; j++){
	temp = hexnum[j];
	hexnum[j] = hexnum[len-j-1];
	hexnum[len-j-1] = temp;
    }
    printf("Num is 0x%s.\n", hexnum);
    return 0;
}
