/* 
 *Program to find mth smallest element from the given array.
 * @lakshay khanna (1910991116)
 * assignment 8
 */ 
#include <stdio.h>
#include <stdlib.h>

// swap the array elements.
void swap(int arr[], int i, int j)
{
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}    
int partition(int arr[], int l, int h){

//selecting pivot element as last element of array.
    int pivot = arr[h];

//let we will start it from left
    int i=l;

//we compare each element of array against pivot, arrange al the smaller
//elemts then pivot to one side and greater to the other.
    for(int j=l;j <= h - 1;j++){
        if(pivot >= arr[j]){
            swap(arr, i, j);
            i++;
        }
    }

    swap(arr, i, h);
 
    return i;
}


int quickSort(int arr[], int l, int h, int m){

if(m > 0 && m <= h - l + 1){

int pi = partition(arr, l, h);

if(pi - l == m - 1)
            return arr[pi];
       
if(m - 1 < pi - l)
            return quickSort(arr, l, pi-1, m);

        return quickSort(arr, pi+1, h, m - pi + l - 1);
    }

//if  index is invalid we return -1.
    return -1;
}

int main()
{  
//input.
    printf("Enter the size of the array:");
    int size;
    scanf("%d", &size);
    int arr[size];
    for(int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the mth element you want to find:");
    int m;
    scanf("%d", &m);

   //calling function for m smallest
    int ans = quickSort(arr, 0, size - 1, m);



    if(ans == -1)
        printf("Invalid Choice!!");
    else
    printf("%dth smallest element in the given array is: %d\n",m, ans);

    return 0;
}