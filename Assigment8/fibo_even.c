/* 
 *Program to printf n even fibonacci numbers.
 * @lakshay khanna (1910991116)
 * assignment 8
 */ 
#include <stdio.h>
#include <stdlib.h>

void fibo(int n, int t1, int t2, int sum)
{
    if(n <= 2)
        return;
    
    printf("%d ", sum);
    t1 = t2;
    t2 = sum;
    fibo(n - 1, t1, t2, 4 * t2 + t1);
}

int main()
{
    printf("even fibonacci you want?");
    int n;
    scanf("%d", &n);
    int t1 = 2, t2 = 8, sum = t1 + 4 * t2;
    if(n >= 1)
        printf("2 ");
    if(n >= 2)
        printf("8 ");
    fibo(n, t1, t2, sum); 
    return 0;
}