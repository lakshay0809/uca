 /*
 * function squeeze(char*s1 , char* s2) that deletes each character in s1 that matches any character in the string s2.
 * @lakshay khanna  ID -> 1910991116
 * assignment: C Foundations
 *Compilation: gcc q10.c
 * Execution: ./a.out
 */
#include <stdio.h>
void squeeze(char *s1,char *s2,int len1,int len2)
{
	int k;
	for(int i=0;i<len2;i++)
	{
		k=0;

		for(int j=0;j<len1;j++)
		{
			if(s1[j]!=s2[i])
			{
				s1[k++]=s1[j];
			}
		}
		s1[k]='\0';
	}
	printf("%s",s1);

}


int main()
{
	char a1[]="abcd";
	char a2[]="bc";
	int len1=0,len2=0;
	int i=0,j=0;
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
	squeeze(a1,a2,len1,len2);


}