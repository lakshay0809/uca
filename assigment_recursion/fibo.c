/*
 * Program to print the fibonacci number at the places which is divisible by 3 using recursion. 
 *
 * @lakshay khanna  ID -> 1910991116
 *
 * Assignment no. -> 05 
 *
 *05/ 08/ 2021
 
 *Compilation: gcc fibo.c
 * Execution: ./a.out
 */
#include <stdio.h>

//function for  fibonnaci number.
int fibo(int n)
{
    //if the number is 0 or 1 it will return 0 or 1 respectively,
       if(n == 0 || n == 1)
        return n;
    
    //it will call the function with n-1 and n-2 as because 
        return (fibo(n-1) + fibo(n-2));
}

int main()
{
       printf("Enter the number of elements to find\n");
    int num;
    scanf("%d", &num);
    
    //initializing the position as from 1 if equal to num it
        int position = 1;
    //count will maintain the 3rd occurrence.
        int start = 1, count = 0;
    // loop for finding the values upto num(range).
    for(position; position <= num;)
    {
    //answer will store the fibonacci number at n,
    int answer = fibo(start);
    count++;
    //if the count is divisible by 3 and it is last number than simply print the answer
    //else if count is divisible by 3 but not last then append , with the answer 
    //else ignore and continue.
    if(count % 3 == 0 && position == num){
        printf("%d\n", answer);
        position++;
    }
    else if(count % 3 == 0) {
        printf("%d, ", answer);
        position++;
    }
    //incrementing the demanding fibonacci.
    start++;

    }

    return 0;
}