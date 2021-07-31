/*
 * Program to observe execution time of selection sort algorithm for different type of inputs.
 *
 * @lakshay khanna  Roll_no -> 1910991116
 *Compilation: gcc selection_sort.c
 * Exicution: ./a.out
 * Assignment no. -> 2
 *28/07/2021
 *
 */
#include<stdio.h>
#include<sys/time.h>
#include<stdlib.h>
// This function swaps the value
void swap(int a[], int i, int j) {
    int temp = a[i];
    a[i] = a[j];
    a[j] = temp;
}

/*selection sort function,  this  select the index of the minimum and then place at the 
beginning of the array and repeat it till size-1.*/
void selection_sort(int arr[], int n) {
    int length = 0;
    while(length < n - 1) {
	    int min_index = length;
	for(int i = length + 1; i < n; i++) {
	    if ( arr[i] < arr[min_index]) {
     	        min_index = i;
	    }
	}
	if(length != min_index) {
	    swap(arr,min_index,length);
	}
	    length++;
    }
}	

//for random values.
void generate_random_input ( int initial_size, int incriment) {
    struct timeval te;
    int i;

    for (i = 0; i < 8; i++) {
        int s = initial_size + incriment * i;
	int a[s];
        for(int x = 0; x < s; x++) {
	    a[x] = rand();
	}

    gettimeofday(&te, NULL);
    long long start = te.tv_sec * 1000LL + te.tv_usec / 1000;
    selection_sort(a, s);
    gettimeofday(&te, NULL);
    long long end = te.tv_sec * 1000LL + te.tv_usec / 1000;
    printf("Time taken when array had random values %11lld\n",end - start);
    }
}
//for sorted values
void generate_sorted_input ( int initial_size, int incriment) {
    struct timeval te;
    int i;
     
    for (i = 0; i < 8; i++) {
        int s = initial_size + incriment * i;
        int a[s];
	for(int x = 0; x < s; x++){
	    a[x] = x;
	}
        gettimeofday(&te, NULL);
        long long start = te.tv_sec * 1000LL + te.tv_usec / 1000;
        selection_sort(a, s);
        gettimeofday(&te, NULL);
        long long end = te.tv_sec * 1000LL + te.tv_usec / 1000;
        printf("Time taken when array had sorted values %11lld\n",end - start);
    }
}

//for reverse sorted values
void generate_reverse_sorted_input ( int initial_size, int incriment) {
    struct timeval te;
    int i;

    for (i = 0; i < 8; i++) {
        int s = initial_size + incriment * i;
        int a[s];
        for(int x = 0; x < s; x++) {
	    a[x] = s - x - 1;
	}
        gettimeofday(&te, NULL);
	long long start = te.tv_sec * 1000LL + te.tv_usec / 1000;
	selection_sort(a, s);
	gettimeofday(&te, NULL);
	long long end = te.tv_sec * 1000LL + te.tv_usec / 1000;
	printf("Time taken when array had reversely sorted values %11lld\n",end - start);
    }
}
//main function
int main ( ) {
    int initial_size = 8000;
    int incriment = 4000;
    //calls a function which inputs rendom values to array,Also calculates the time taken to sort the array.
    generate_random_input( initial_size, incriment );
    printf("\n");
    //calls a function which inputs sorted values to array,Also calculates the time taken to sort the array.
    generate_sorted_input( initial_size, incriment );
    printf("\n");
    //calls a function which inputs reversely sorted values to array,Also calculates the time taken to sort the array.
    generate_reverse_sorted_input( initial_size, incriment );
    printf("\n");
}

