/*
 * GCD using recursion. 
 *
 * @lakshay khanna  ID -> 1910991116
 *
 * Assignment no. -> 05 
 *
 *05/ 08/ 2021
 
 *Compilation: gcc gcd.c
 * Execution: ./a.out
 */
#include <stdio.h>


int find_gcd(int a, int b)
{
    if(b == 0)
        return a;
// we divide two numbers and find quotient and remainder respectively.
    return find_gcd(a / b, a % b);
}

int main()
{
    int a, bs;
// input from the user as a and b
    printf("Enter two numbers\n");
    scanf("%d %d", &a, &b);
//assigning large number first and smaller as second for ease of calculation
int max = a > b ? a : b;
int min = a + b - max;
//passing both numbers to a function
   int answer = find_gcd(max, min);
//printing answer
    printf("Gcd of %d and %d is: %d\n", a, b, answer);
    return 0;
}
