/*
Name		: MERLIN MARIYAM REJI
Date		: 15/05/2024
Description	: Check if all vowels are present if yes accept
Sample input	: AEIOU
Sample output	: Accepted
 */

#include <stdio.h>
#include <string.h>

int main()
{
    int vowels[] = {'A', 'a', 'E', 'e', 'I', 'i', 'O', 'o', 'U', 'u'};
    char str[50];
    //FLAGS TO KEEP TRACK OF THE CHARACTERS
    int a = 0, e = 0, i = 0, o = 0, u = 0, count = 0, k, j;

    printf("Enter a string: ");
    scanf("%[^\n]", str);

    for (k=0; k<strlen(str); k++)
    {
	for (j=0; j<10; j++)
	{
	    if (str[k] == vowels[j] && (vowels[j] == 'A' || vowels[j] == 'a') && a == 0)
	    {
		a = 1;
		count++;
	    }
	    else if (str[k] == vowels[j] && (vowels[j] == 'E' || vowels[j] == 'e') && e == 0)
	    {
		e = 1;
		count++;
	    }
	    else if (str[k] == vowels[j] && (vowels[j] == 'I' || vowels[j] == 'i') && i == 0)
	    {
		i = 1;
		count++;
	    }
	    else if (str[k] == vowels[j] && (vowels[j] == 'O' || vowels[j] == 'o') && o == 0)
	    {
		o = 1;
		count++;
	    }
	    else if (str[k] == vowels[j] && (vowels[j] == 'U' || vowels[j] == 'u') && u == 0)
	    {
		u = 1;
		count++;
	    }
	}
    }
    if (count == 5)
    {
	printf("Accepted.");
    }
    else
    {
	printf("Not accepted.");
    }
    return 0;
}


