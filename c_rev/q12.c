 /*
 *function strrindex( char* s , char* t ) which returns the position of the rightmost occurrence of t in s , or - 1 if there is none 
 * @lakshay khanna  ID -> 1910991116
 * assignment: C Foundations
 *Compilation: gcc q12.c
 * Execution: ./a.out
 */
#include <stdio.h>

int strIndex(char *s,char *t)
{


	int j,k=0,len;
	int count,index=-1;
	while(t[k++]!='\0')
	{
		len++;
	}

	for(int i=0;s[i]!='\0';i++)
	{
		int j=0;
		int count=0;
		while(s[i]==t[j]&&j<len)
		{
			count++;
			i++;
			j++;

		}

		if(count==len&&i>index)
		{
			index=i-len;
		}
	}
	return index;
}
int main()
{
	char s[]="abcd";
	char t[]="d";
	int index= strIndex(s,t);
	printf("%d",index);
	return 0;
}