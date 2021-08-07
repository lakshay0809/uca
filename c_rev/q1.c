/*
 * Swap to numbers without using third variable
 * @lakshay khanna  ID -> 1910991116
 * assignment: C Foundations
 *Compilation: gcc q1.c
 * Execution: ./a.out
 */
#include <stdio.h>
void swap(int *x,int *y)
{
	*x=*x+*y;
	*y=*x-*y;
	*x=*x-*y;

}
int main()
{
	int x=10,y=20; printf("Before Swap x=%d,y=%d\n",x,y);
	swap(&x,&y);

	printf("After Swap x=%d,y=%d",x,y);


	return 0;
}