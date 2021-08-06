/*
 * selection sort using recursion. 
 *
 * @lakshay khanna  ID -> 1910991116
 *
 * Assignment no. -> 05 
 *
 *05/ 08/ 2021
 
 *Compilation: selection_sort.c
 * Exicution: ./a.out
 */
#include <stdio.h>

//recursive sort function.
void sort(int start_index, int next_index, int arr[], int size){
    if(start_index < size - 1){
        if(start_index == next_index){
            next_index = start_index + 1;
        }
        if(next_index < size){
//if start_index element is greater than swap it element with next_index element.
            if(arr[start_index] > arr[next_index]){
                int temp = arr[start_index];
                arr[start_index] = arr[next_index];
                arr[next_index] = temp;
            }
//increase next_index for checking next minimum index.
        sort(start_index, next_index + 1, arr, size);
        }
//increase start_index by 1.
        sort(start_index + 1, next_index, arr, size);
    }
    return ;
}

//it will print the given array.
void print(int arr[], int size){
    for(int index = 0; index < size; index++)
        printf("%d ", arr[index]);
    printf("\n");
}

int main()
{

    int array[10] = {10,9,8,7,6,5, 2, 3, 4, 1};
//calling sort function.
    sort(0, 0, array, 10);
//for printing .
    print(array, 10);
    return 0;
}
