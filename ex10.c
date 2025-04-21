#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "");
    float s, t;
    int h;
    printf("Informe quanto você ganha por hora: R$ ");
    scanf("%f", &s);
    printf("Infome quantas horas você trabalhou este mês: ");
    scanf("%i", &h);
    t = s*h;
    printf("O total de seu salário esse mês será de %.2f.", t);
}