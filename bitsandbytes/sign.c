/*
  * Program to find the sign of the give number.
  * @lakshay khanna  ID -> 1910991116
  *Compilation: gcc sign.c
  * Execution: ./a.out
   */
#include <stdio.h>

int sign(int x){
    return (x >> 31) | (!!x);
}

int main()
{
    int x;
    printf("Enter the number:\n");
    scanf("%d", &x);
    printf("Sign of %d is: %d\n",x, sign(x));

    return 0;
}