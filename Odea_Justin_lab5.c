#include <stdio.h>

// Submitted by Justin M O'Dea

int main() {

    int array[12];
    printf("\nEnter a bar code to check. Separate digits with a space >\n"); //print statement
    scanf("%d %d %d %d %d %d %d %d %d %d %d %d", &array[0], &array[1], &array[2], &array[3], &array[4], &array[5], // takes in a number throws it into an array
          &array[6], &array[7], &array[8], &array[9], &array[10], &array[11]);
    printf("You entered the code: %d %d %d %d %d %d %d %d %d %d %d %d\n", array[0], array[1], array[2], array[3], //prints out the numbers that were scanned in
           array[4], array[5], array[6], array[7], array[8], array[9], array[10], array[11]);

    int step_1 = 3 * (array[0] + array[2] + array[4] + array[6] + array[8] + array[10]); //this is my step 1
    printf("STEP 1: Sum of odds times 3 is %d \n", step_1);

    int step_2 = (array[1] + array[3] + array[5] + array[7] + array[9]); // this is my step 2
    printf("STEP 2: Sum of the even digits is %d \n", step_2);

    int step_3 = step_1 + step_2;
    printf("STEP 3: Total sum is %d \n", step_3); //this is my step 3

    int step_4 = step_3 % 10; // gives the last digit in the #

    if(step_4 != 0){ //if this doesn't equal 0
        step_4 = 10 - step_4;

    }
    printf("STEP 4: Calculated check digit is %d \n", step_4); // this is my step 4
    if (step_4 == array[11])

    {

        printf("STEP 5: Check digit and last digit match  \n"); //this is my step 5
        printf("Barcode is Valid"); //prints that step 5 is valid
    }

    else{
        printf("Barcode is invalid"); //prints that step 5 is invalid
    }

    return 0; //returns
}


