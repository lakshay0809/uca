/* Program to find the square root of number using binary search
 *
 * Compilation: gcc assigment1.c
 * Exicution: ./a.out
 *
 * @lakshay khanna (1910991116), 20/07/2021
 * Assignment
 * Resources: geeks_for_geeks
 */

#include<stdio.h>

double square_root_binary_search (int number, int pricision){
    
    double root = 0.0;
    int ans = 0;
    int i = 0;
    int low = 0;
    int high = number;
    int mid = (low + high) / 2;
    while(high < low){
	// checks if the square of the mid is equal to number and stores it to ans and break,
	// else it moves to next if statement
        if(mid*mid == number){
	    ans = mid;
	    break;
	}
	if (mid * mid < number) {
            low = mid + 1;
    	    root = mid;
	} else {
            high = mid - 1;
	}
    }

    float increment = 0.1;
    // loop runs till we reach the desigred pricision
    for (i = 0; i < pricision; i++) {
	    // runs as long as the value of square of root is less then number
	    // and increases the value of root by adding the increment
        while (root * root <= number){
            root += increment;
        }

        root = root - increment;
        increment = increment / 10;
    }
    return root;
}
	

int main(){
    int number = 0;
    int pricision = 0;
    printf("Enter the number: ");
    scanf("%d",&number);
    printf("Enter the pricision: ");
    scanf("%d",&pricision);
    //calls the function square_root_binary_search
    double result = square_root_binary_search (number, pricision);
    printf("Square root of the number %d with a pricision of %d is %g.\n", number, pricision, result);
    return 1;    
}	
/* function to find the square root of a number using binary search
 *
 * Parameters
 * number: integer type variable
 * pricision: integer type variable
 * root: double type variable
 * returns square root of the number.
 */


    

