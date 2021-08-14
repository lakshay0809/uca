/*
 * count inversion
 * @lakshay khanna  ID -> 1910991116
 *Compilation: gcc inversiom.c
 * Execution: ./a.out
 */ 

#include <stdio.h>

int main()
{
    int len;
    printf("Enter the length of array");
    scanf("%d",&len);
    int arr[len];
    int count=0;
    for(int i = 0; i < len; i++) {
        scanf("%d",&arr[i]);
    }
    int j=0;
    for(int i=1;i<len;i++)
    {
        int ele=arr[i];
        for(j=i-1;j>=0;j--)
        {
            if(arr[j]>ele)
            {
                arr[j+1]=arr[j];
                count++;
            }
        }
        arr[j+1]=ele;
    }
   printf("%d",count);
    return 0;
}