#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "");
    float m, cm;
    printf("Indique a distância desejada em metros: ");
    scanf("%f", &m);
    cm = m*100;
    printf("A distância informada, em centímetros, é igual a %.2f.", cm);
}