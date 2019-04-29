#include <stdio.h>
#include <stdlib.h>

void my_function();
/*
functions definitions:

type function_name (type1 arg1, type2 arg2,....){
    code statements..
    ......
    return value_of_type
}
*/

int product(int a, int b){
    return a*b;
}

int main(){

    int a, b, result;

    printf("Enter two numbers to multiply:\n");
    printf("\nnumber 1: ");
    scanf("%d", &a);
    printf("\nnumber 2: ");
    scanf("%d", &b);


    result = product(a,b);
    printf("\n product of %d and %d is %d", a,b,result);
}


void my_function(){
    printf("\nsum=%d", 10+34);
    printf("\ninside a function");
}
