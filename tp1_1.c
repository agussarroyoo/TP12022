#include <stdio.h>

int main() {
    printf("hola mundo");

    int variable, *pVariable;
    pVariable = &variable;

    printf("%d", *pVariable);
    printf("%d", pVariable);
    printf("%d", &variable);
    printf("%d", &pVariable);
    printf("%d", pVariable);
    printf("%d", sizeof(variable));
    
}