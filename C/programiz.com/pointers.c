// https://www.programiz.com/c-programming/c-pointers

#include <stdio.h>  // 'inlcude'= preprocessor statement
int main(void){
    int var = 5;
    printf("Value: %d\n", var);
    printf("Address: %u\n\n", &var);  //Notice, the ampersand(&) before var.

    int* pc, c;

    c = 22;
    printf("Address of c: %u\n", &c);
    printf("Value of c: %d\n\n", c);

    pc = &c;
    printf("Address of pointer pc: %u\n", pc);
    printf("Content of pointer pc: %d\n\n", *pc);

    c = 11;
    printf("Address of pointer pc: %u\n", pc);
    printf("Content of pointer pc: %d\n\n", *pc);

    *pc = 2;
    printf("Address of c: %u\n", &c);
    printf("Value of c: %d\n\n", c);

    char *str="hello amir";
    printf("%s", str);
    printf("\n%d", strlen(str));
    printf("\n%d", sizeof(str));

    char s[] = "hello amir";
    printf("\n\n%s", s);
    printf("\n%d", strlen(s));
    printf("\n%lu", sizeof(s));
    s[0] = 'j';

    // Wrong! pc is address whereas,
    // c is not an address.
    // pc = c;

    // Wrong! *pc is the value pointed by address whereas,
    // &c is an address.
    *pc = &c;

    // Correct! pc is an address and,
    // &c is also an address.
    pc = &c;

    // Correct! *pc is the value pointed by address and,
    // c is also a value (not address).
    *pc = c;

    return 0;
}
