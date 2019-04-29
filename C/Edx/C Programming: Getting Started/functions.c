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



int main(){

    my_function();
    my_function();
}


void my_function(){
    printf("\nsum=%d", 10+34);
    printf("\ninside a function");
}
