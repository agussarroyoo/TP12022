#include <stdio.h>

int cuadrado(int num);
void cuadradonum(int *num);
void mostrar (int vble);
void invertir(int *a,int *b);
void ordenar(int *a,int *b);

int main() {
    int num,a,b,num2;
    scanf("%d",&num);
    num2 = cuadrado(num);
    printf("holaaaaaaaaaa");
    printf("\ncuadrado: %d", num2);
    // scanf("%d",&num);
    // cuadradonum(&num);
    // printf("\ncuadradonum\n");
    // mostrar(num);
    // scanf("a: %d",&a);
    // scanf("b: %d",&b);
    // invertir(&a,&b);
    // printf("a: %d",a);
    // printf("b: %d",b);
    // ordenar(&a,&b);
    // printf("a: %d",a);
    // printf("b: %d",b);
}

int cuadrado(int num) {
    return num*num;
}
void cuadradonum(int *num) {
    (*num) * (*num);
}
void mostrar(int vble) {
    printf("contenido : %d",vble);
    printf("direccion de memoria: %d",&vble);

}
void invertir (int *a, int *b) {
    int aux;
    aux = *a;
    *a=*b;
    *b=aux;
}
void ordenar(int *a,int *b) {
    if(*a > *b) {
        int aux;
        aux = *a;
        *a=*b;
        *b=aux;
    }
}
