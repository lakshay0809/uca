/*
 * String is palindrome or not
 * @lakshay khanna  ID -> 1910991116
 * assignment: C Foundations
 *Compilation: gcc q6.c
 * Execution: ./a.out
 */
#include <stdio.h>
#include<stdbool.h>
//function check for palindrome
bool palindrome(char *a)
{
	int l=0;
	int h=0;
	for(int i=0;a[i]!='\0';i++)//loop to check length of given string
	{
		h++;

	}
	for(int i=0;i<h;i++)//loop to convert all uppercase alphabets to lowercase
	{
		if(a[i]>='A'&&a[i]<='Z')
		{
			a[i]=a[i]+32;
		}
	}

	while(l<=h)
	{
		if(!(a[l]>='a'&&a[l]<='z')||a[l]>='A'&&a[l]<='Z')
		{
			l++;
		}
		else if(!(a[h]>='a'&&a[h]<='z')||(a[h]>='A'&&a[h]<='Z'))
		{
			h--;
		}
		else
		{
			if(a[l]==a[h])
			{
				l++;
				h--;
			}
			else
			{
				return false;
			}
		}
	}
	return true;
}


int main()
{
	char a[]="Never Odd or Even";
	bool s=palindrome(a);
	if(s)
	{
		printf("True");
	}
	else
	{
		printf("False");
	}

	return 0;
}