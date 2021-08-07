 /*
 * function any( char* s1 , char* s2), which returns the first location in the string1 where any character from the string2 occurs, or  -1 if s1 contains no characters from s2
 * @lakshay khanna  ID -> 1910991116
 * assignment: C Foundations
 *Compilation: gcc q11.c
 * Execution: ./a.out
 */
#include <stdio.h>


int pos(char *s1,char *s2,int len1,int len2)
{
	int k;

	for(int i=0;i<len2;i++)
	{


		for(int j=0;j<len1;j++)
		{
			if(s1[j]==s2[i])
			{
				return j;
			}
		}


	}
	return -1;



}


int main()
{
	char a1[]="abcd";
	char a2[]="kz";
	int i=0,j=0,len1=0,len2=0;
	while(a1[i]!='\0')
	{
		len1++;
		i++;
	}
	while(a2[j]!='\0')
	{
		len2++;
		j++;
	}
	int d=pos(a1,a2,len1,len2);
	printf("%d",d);

}