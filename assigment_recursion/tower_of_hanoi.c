/*
 * Tower of hanoi. 
 *
 * @lakshay khanna  ID -> 1910991116
 *
 * Assignment no. -> 05 
 *
 *05/ 08/ 2021
 
 *Compilation: gcc tower_of_hanoi.c
 * Exicution: ./a.out
 */
#include <stdio.h>
#include <math.h>

// function for finding steps.
void tower_of_hanoi(int discs, char src, char helper, char dest)
{
//if number of discs is greater than 0.
    if(discs > 0)
    {
        //moving all discs except the largest(n-1) from src tower(A) to 
        //helper tower(B) using dest tower(C). 
        //in this src acts as source destination act as helper and helper act as destination.
        tower_of_hanoi(discs - 1, src, dest, helper);

        //moving the last disc(largest) from source tower(A) to destination tower(C).
        //in this source act as source and destination act as destination(we dont need helper tower for moving one disc).
        printf("%c to %c\n", src, dest);

        //now the moved discs in tower B aacts as source and we have to 
        //transfer them to destination tower that is tower C with help of empty tower A.
        //in this helper acts as source destination act as destination and source act as helper.
        tower_of_hanoi(discs - 1, helper, src, dest);
    }
    return;
}

int main()
{
//taking input from users how many discs need to transfer from tower 'A' to tower 'C'.
    printf("Enter number of discs\n");
    int discs;
    scanf("%d", &discs);

//calling the function tower_of_hanoi for printing the steps required in transferring.
    printf("Steps to move discs from tower A to C\n"); 
    tower_of_hanoi(discs, 'A', 'B', 'C');


    printf("\nTotal movments required = %d\n\n",(int)pow(2, discs) - 1 );
    
    return 0;
}