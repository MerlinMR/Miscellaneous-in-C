/*
Name		: MERLIN MARIYAM REJI
Date		: 02/04/2024
Description	: Convert all 0s in a number to 1s
Sample input	: 100
Sample output	: 111
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define default_size 3

int main()
{

#if 0

    //TO HANDLE SMALL NUMBERS THIS PROGRAM WILL WORK BUT NOT FOR LARGER NUMBERS

    int num, copy; 
    int size = 0, i, out = 0;
    printf("Enter the number to be changed: ");
    scanf("%d", &num);

    copy = num;
    while (copy != 0)
    {
	copy = copy / 10;
	size = size + 1;
    }

    char str[size+1];
    sprintf(str, "%d", num);

    for(i=0; i<size; i++)
    {
	if (str[i] == '0')
	{
	    str[i] = '1';
	}
    }
    str[i] = '\0';

    i = 0;
    while (str[i] != '\0') 
    {
	out = out * 10 + (str[i] - '0');
	i++;
    }

    printf("The converted num is : %d\n", out);

    return 0;

#endif

#if 1

    //TO HANDLE LONGER NUMBER INT CANT BE USED SO STORE THE NUMBER AS A STRING AND OPERATE AS  STRING
    char *str = malloc(default_size);
    if (str == NULL)
    {
	printf("Memory not allocated for str.\n");
	free(str);
	return 0;
    }

    printf("Enter the number to be cahnged: ");
    int i = 0, size = default_size, s_size;
    char c;

    while ((c = getchar()) != '\n')
    {
	str[i++] = c;

	if (i > size)	//REALLOCATE MEMORY IF i GOES MORE THAN ALLOCATED MEMORY
	{
	    str = realloc (str, 2 * size);
	    if (str == NULL)
	    {
		printf("Memory not reallocated for str.\n");
		free(str);
		return 0;
	    }
	    size = 2 * size;
	}
    }
    str[i] = '\0';

    s_size = strlen(str);

    for (i=0; i<s_size; i++)
    {
	if (str[i] == '0')
	{
	    str[i] = '1';
	}
    }

    printf("Converted number is %s.\n", str);

    return 0;

#endif

}



