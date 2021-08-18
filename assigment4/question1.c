/*
  * Program that checks for balanced parentheses
 * @lakshay khanna  ID -> 1910991116
 *Compilation: gcc question1.c
 * Execution: ./a.out
 */ 
#include<stdio.h>
#include<stdbool.h>
#define MAX 1000
char st[MAX];			// Maximum size of Stack
int top = -1;

void push (char x);		//declaration of push function
char pop ();			//declaration of pop function




void push (char x)			//push function of stack
{

	if (top >= (MAX - 1))
	{
         printf ("stack overflow");
        }
	else
	{

		st[++top] = x;




	}

}


char peek ()				//return top value of stack 
{

	return st[top];

}



char pop ()				//returns poped value of stack
{

	if (top < 0)
	{


		printf ("stack is Empty");

	}

	else
	{

		char x = st[top--];

		return x;

	}

}


bool isEmpty ()		//checks if stack is empty or not
{

	return (top < 0);

}



int main () 
{

	char a[] = "([)]";

	int i = 0;

	bool flag = false;


	int len = sizeof (a) / sizeof (a[0]);


	for (int i = 0; i < len; i++)

	{

		if (a[i] == '{' || a[i] == '[' || a[i] == '(')

		{

			push (a[i]);

		}

		else

		{

			if (!isEmpty ())

			{

				flag = true;

				char ch = pop ();

				if (ch == '{' && a[i] == '}')

				{


					continue;


				}

				else if (ch == '[' && a[i] == ']')

				{


					continue;

				}

				else if (ch == '(' && a[i] == ')')

				{


					continue;


				}

				else

				{

					flag = false;

					break;

				}

			}

			else

			{

				break;

			}


		}


	}

	if (flag == true && isEmpty ())

	{

		printf ("True");

	}

	else

	{

		printf ("False");

	}

}