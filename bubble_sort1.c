#include<sys/time.h>
#include<stdlib.h>
#include<stdio.h>
void swap(int a[], int i, int j) {
    int temp = a[i];
    a[i] = a[j];
    a[j] = temp;
}

void bubble_sort (int a[], int end ) {
    int i = 0, j;
    int flag = 0;
    for (i = 0; i<  end; i++) {
        flag = 0;
            for (j = 0; j < end-i-1; j++) {
                if (a[j] > a[j+1]) {
                    swap(a,j,j+1);
                    flag = 1;
                }
            }
        if( !flag ) {
            break;
        }
    }
}

void random_input ( int initial_size, int incriment) {
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
    bubble_sort(a, s);
    gettimeofday(&te, NULL);
    long long end = te.tv_sec * 1000LL + te.tv_usec / 1000;
    printf("Time taken when array had random values %11lld\n",end - start);
    }
}

void sorted_input ( int initial_size, int incriment) {
    struct timeval te;
    int i;

    for (i = 0; i < 8; i++) {
        int s = initial_size + incriment * i;
 int a[s];
        for(int x = 0; x < s; x++){
            a[x] = x;
        }
 gettimeofday(&te, NULL);
        long long start = te.tv_sec * 10000LL + te.tv_usec / 100;
        bubble_sort(a, s);
        gettimeofday(&te, NULL);
        long long end = te.tv_sec * 10000LL + te.tv_usec / 100;
        printf("Time taken when array had sorted values %11lld\n",end - start);
    }
}

void reverse_sorted_input ( int initial_size, int incriment) {
    struct timeval te;
    int i;

    for (i = 0; i < 8; i++) {
        int s = initial_size + incriment * i;
        int a[s];
        for(int x = 0; x < s; x++) {
            a[x] = s - x;
        }
        gettimeofday(&te, NULL);
        long long start = te.tv_sec * 1000LL + te.tv_usec / 1000;
        bubble_sort(a, s);
        gettimeofday(&te, NULL);
        long long end = te.tv_sec * 1000LL + te.tv_usec / 1000;
        printf("Time taken when array had reversely sorted values %11lld\n",end - start);
    }
}
//main function
int main ( ) {
    int initial_size = 8000;
    int incriment = 4000;
    //calls a function which inputs random values to array.
    random_input( initial_size, incriment );
    printf("\n");
    //calls a function which inputs sorted values to array.
    sorted_input( initial_size, incriment );
    printf("\n");
    //calls a function which inputs reversely sorted values to array.
    reverse_sorted_input( initial_size, incriment );
    printf("\n");
}
