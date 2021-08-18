/*
   * Program to implement conditional statement without using ?
   * @lakshay khanna  ID -> 1910991116
   *Compilation: gcc cond.c
   * Execution: ./a.out
   */
#include <stdio.h>

//In this we will check if x is 0 or not by !!x, then we make a variable 
//in this all bits are zero if x is 0 else all bits are 1.
//Now by either bits & y is zero or ~bits & z is zero and the other wil return.
int conditional(int x, int y, int z)
{
    int zero_or_not = !(!x);
    int bits = ~zero_or_not + 1;
    return (bits & y) | (~(bits) & z);
}

int main()
{
    int x, y, z;
    printf("Enter three numbers:\n");
    scanf("%d %d %d", &x, &y, &z);
    int ans = conditional(x, y, z);
    printf("%d ? %d : %d = %d\n",x, y, z, ans);
    return 0;
}