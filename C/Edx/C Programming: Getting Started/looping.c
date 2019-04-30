#include <stdio.h>

int main(){
    /* This is a sample looping program in C.
    This is a multi line commenting sample.
    */

    // for loop
    int i = 0;
    for(i=0; i<5; i++){
        printf("For loop testing\n");
    }
    printf("\n");
    for(i=0; i<3; i++)
        printf("Testing single statement execution on for loop, without braces\n");
        printf("\nout of the for loop block\n");  // this line will be the outer scope of for loop block

    // while loop
    int j = 0;
    while(j<4){
        printf("\nInside the while loop");
        j++;    // j = j + 1
    }
    printf("\nOutside the while loop\n");

    // do while loop
    /*
    statement block inside 'do' will be executed whether the condition in
    'while' statement either true or false
     */
    int k = 0;
    do{
        printf("\njust do it!");
        k++;
    }while(k<4);

    printf("\nOops I did it again!");

    return 0;
}
