/*
Name		: MERLIN
Date		: 02/04/2024
Description	: Program to print n prime numbers
Sample input	: 3
Sample output	: 2, 3, 5,
 */

//Prime number is a whole number greater than 1 that cannot be exactly divided by any whole number other than itself and 1


#include <stdio.h>

int is_prime(int num)
{
    int i;

    if (num <= 1)	//IF NUM REACHES ONE return 0 AS ANY NUMBER EQUAL TO OR LESSER THAN 1 IS NOT PRIME
    {
	return 0;
    }

    for(i=2; i*i <= num; i++)	//CHECK IF SQUARE OF THE NUMBER IS > num. IF YES THEN return 0 SINCE ALL FACTORS OF A NUMBER MUST BE <= TO ITS SQUARE ROOT
    {
	if (num%i == 0) 	//IF NO DIVISOR FOUND THEN EXIT LOOP AND return 1
	{
	    return 0;
	}
    }

    return 1;
}

void print_prime(int n)
{
    int count = 0;
    int num = 2;

    while (count < n)	//RUN LOOP TILL n times
    {
	if(is_prime(num))
	{
	    printf("%d, ", num);
	    count++;
	}
	num++;
    }
}

int main()
{
    int i, n;
    printf("Enter number of primes needed: ");	//PROMPT USER TO ENTER THE UPPER BOUND
    scanf("%d", &n);
    printf("The first %d prime numbers are : ", n);	//PRINT OUT THE RESULT
    print_prime(n);

    return 0;
}


