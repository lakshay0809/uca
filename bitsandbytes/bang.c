 /*
 * Program to find bang without !.
 * @lakshay khanna  ID -> 1910991116
  *Compilation: gcc bang.c
 * Execution: ./a.out
   */
#include <stdio.h>

int invert(int x)
{
    int invx = ~x; //it will find the negation of the number
    int opp = invx + 1; // it will make the same value as x but with opposite sign.so that 0 will again turn to 0.
    return (( ~opp & invx) >> 31) & 1; //here we negate the opp then & with negation of x and will find msb then & with 1.
}

int main()
{
    int x;
    printf("Enter the number:\n");
    scanf("%d", &x);
    
    printf("!%d = %d\n",x, invert(x));
    return 0;
}