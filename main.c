#include <stdio.h>
#include <stdlib.h>

/* Brandon Lapomeray
 *
 * Program creates an array, takes in values and finds its average.
 * 
 */


int main() {

    int i;
    int average;
    int size;

    printf("Enter the size of the Array \t");
    scanf("%d", &size);

    // Dynamic Array
    int *A;
    A = (int*) malloc(size * sizeof(int));


    int sum;


    // Enter values for array
    for(i = 0; i < size; i++){


        printf("Enter the values of the arrays, clicking enter after each input: ");

        scanf("%d", &A[i]);

        sum += A[i];

    }

    // Print array values
    for(i = 0; i < size; i++){

        printf("%d \n", A[i]);
    }


    // Calculate average
     average = sum/size;

    printf("Sum is equal to: %d \n",sum );
    printf("Average is equal to: %d ",average );


    // Free array values
    free(A);


    return 0;
}


