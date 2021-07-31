/*
 * Program to observe execution time of selection sort algorithm for different type of inputs.
 *
 * @lakshay khanna  Roll_no -> 1910991116
 *Compilation: gcc insertion_sort.c
 * Exicution: ./a.out
 * Assignment no. -> 2
 *28/07/2021
 *
 */
#include<stdio.h>
#include<sys/time.h>
#include<stdlib.h>
void insertion_sort(int array[], int size) {
    for(int index = 1; index < size; index++) {
	int new_index = index;
        int new_element = array[index];
	    
	//for finding the correct position in the sorted array
	while(new_index > 0 && array[new_index - 1] > new_element) {
	    array[new_index] = array[new_index - 1];
	    new_index--;
	}
	
	//placing the new value to at the right position.
	array[new_index] = new_element;
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
    insertion_sort(a, s);
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
        insertion_sort(a, s);
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
	insertion_sort(a, s);
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

