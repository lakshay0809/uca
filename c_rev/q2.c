/*
 * Print Pyramid
 * @lakshay khanna  ID -> 1910991116
 * assignment: C Foundations
 *Compilation: gcc q2.c
 * Execution: ./a.out
 */ 

#include <stdio.h>

int main()
{

    int n=5;

  for(int i=1;i<=n;i++)
  {
      for(int space=n-i-1;space>=0;space--)
      {
          printf(" ");
      }
      for(int j=0;j<i;j++)
      {
          printf("# ");
      }
      printf("\n");
  }
}