/*
 *  program to print all input lines that are longer than 80 characters
 * @lakshay khanna  ID -> 1910991116
 * assignment: C Foundations
 *Compilation: gcc q7.c
 * Execution: ./a.out
 */

#include <stdio.h>

int main()
{
	int len,limit=80,maxLimit=1000;

	char c[maxLimit];
	int d,i;
	for(i=0;i<maxLimit-1&&(d=getchar())!=EOF&&d!='\n';i++)
		c[i]=d;

	if(d=='\n')
	{
		c[i]=d;
		i++;

	}
	c[i]='\0';

	if(i>limit)
	{
		printf("%s",c);
	}



}
