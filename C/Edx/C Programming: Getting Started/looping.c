#include <stdio.h>

int main(){
    /* This is a sample for loop program in C.
    This is a multi line commenting sample.
    */

    int i = 0;
    for(i=0; i<5; i++){
        printf("For loop testing\n");
    }
    printf("\n");
    for(i=0; i<3; i++)
        printf("Testing single statement execution on for loop, without braces\n");
        printf("out of the for loop");  // this line will be the outer scope of for loop block

    // while loop
    while(i<4){
        printf("\nInside the while loop");
        i++;    // i = i + 1
    }
    printf("\nOutside the while loop\n");
    return 0;
}
