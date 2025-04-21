#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "");   
    float r, A;
    printf("Informe o raio do círculo em cm: ");
    scanf("%f", &r);
    A = 3.14*(pow(r, 2));
    printf("A área do círculo informado é de %.2fcm.", A);
}