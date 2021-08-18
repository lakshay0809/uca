/* 
 * sliding window LeetCode Problem
 * @lakshay khanna (1910991116)
 * assignment:stack and queues
 */ 

#include<stdlib.h>

struct stack{

    int size;
    int top;
    int *arr;
};

struct stack * create(int n)
{
    struct stack *s = (struct stack*)malloc(sizeof(struct stack));
    s->size =n;
    s->top =-1;
    s->arr = (int *)malloc(s->size * sizeof(int));

    return s;
}

int isEmpty(struct stack *ptr)
{
    if(ptr->top == -1)
      return 1;
    else
      return 0;
}

int isFull(struct stack *ptr)
{
   if(ptr->top == ptr->size-1)
   return 1;
   else
   return 0;
}

void push(struct stack *ptr,int ele)
{
    if(isFull(ptr))
    {
        printf("stack overflow");
    }
    else
    {
        ptr->top++;
        ptr->arr[ptr->top]=ele;
    }
}

int pop(struct stack *ptr)
{
    if(isEmpty(ptr))
    {
        printf("stack underflow");
        return -1;
    }
    else
    {
        int val = ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}

int peek(struct stack *ptr)
{
    return ptr->arr[ptr->top];
}

int* maxSlidingWindow(int* nums, int n, int k, int* returnSize)
{
     *returnSize = n-k+1;

     int *ans =(int *)malloc(sizeof(int) * n-k+1);
     struct stack *s = create(n);

     int *r = (int *)malloc(sizeof(int)*n);
     push(s,n-1);
     r[n-1]=n;

     for(int i=n-2;i>=0;i--)
     {
        while( s->top>=0 && nums[i] >= nums[peek(s)])
        {
           pop(s);
        }
        if(s->top == -1)
        {
           r[i]=n;
        }
        else
        {
           r[i]=peek(s);
        }
         push(s,i);
     }
       int m=0,j=0;
     for(int i=0;i<=n-k;i++)
     {
        if(j<i)
        {
         j=i;
        }
        while(r[j]<i+k)
        {
            j=r[j];
        }
      ans[m++]=nums[j];
     }
 return ans;
}
