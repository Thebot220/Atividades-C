#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "");
    float l, A;
    printf("Informe o lado do quadrado: ");
    scanf("%f", &l);
    A = l*l;
    printf("O dobro da �rea do quadrado informado � %.2f.", 2*A);
}