#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "");   
    float r, A;
    printf("Informe o raio do c�rculo em cm: ");
    scanf("%f", &r);
    A = 3.14*(pow(r, 2));
    printf("A �rea do c�rculo informado � de %.2fcm.", A);
}