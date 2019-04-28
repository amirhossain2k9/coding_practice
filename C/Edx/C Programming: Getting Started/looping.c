#include <stdio.h>

int main(){

    int i = 0;
    for(i=0; i<5; i++){
        printf("For loop testing\n");
    }
    printf("\n");
    for(i=0; i<3; i++)
        printf("Testing single statement execution on for loop, without braces\n");
        printf("out of the for loop");
    return 0;
}
