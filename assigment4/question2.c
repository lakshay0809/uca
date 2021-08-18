/*
  * Program that converts an arithmetic expression from infix notation to postfix notation.
 * @lakshay khanna  ID -> 1910991116
 *Compilation: gcc question2.c
 * Execution: ./a.out
 */ 
#include<stdio.h>
#include<stdbool.h>
#define MAX 1000
int st[MAX]; // Maximum size of Stack
int top=-1;
bool push(int x);//declaration of push function
int pop();//declaration of pop function




bool push(int x)//push function of stack
{
	if (top >= (MAX - 1)) {

		return false;
	}
	else {
		st[++top] = x;

		return true;
	}
}
int peek()//return top value of stack 
{
	return st[top];
}

int pop()//returns poped value of stack
{
	if (top < 0) {

		return 0;
	}
	else {
		int x = st[top--];
		return x;
	}
}
bool isEmpty()//checks if stack is empty or not
{
	return (top < 0);
}

int prec(char c)//function to get precedence of operators
{
	if(c == '^')
		return 3;
	else if(c == '/' || c=='*')
		return 2;
	else if(c == '+' || c == '-')
		return 1;
	else
		return -1;
}

int main()
{

	char a[]="(1+((3-1)*(4/2)))";
	int l=sizeof(a)/sizeof(a[0]);
	char res[l];
	int k=-1;

	for(int i=0;i<l;i++)
	{
		if(a[i]>='1'&&a[i]<='9')
		{
			res[++k]=a[i];
		}
		else if(a[i]=='(')
		{
			push(a[i]);
		}
		else if(a[i]==')')
		{
			while(!isEmpty()&&peek()!='(')
			{
				res[++k]=peek();
				pop();
			}
			pop();
		}
		else
		{
			while(!isEmpty()&&prec(a[i])<=prec(peek()))
			{
				res[++k]=peek();
				pop();
			}
			push(a[i]);
		}
	}
	while(!isEmpty())
	{
		res[++k]=peek();
		pop();

	}
	printf("%s",res);

	return 0;
}