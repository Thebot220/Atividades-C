#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "");
    float m, cm;
    printf("Indique a dist�ncia desejada em metros: ");
    scanf("%f", &m);
    cm = m*100;
    printf("A dist�ncia informada, em cent�metros, � igual a %.2f.", cm);
}