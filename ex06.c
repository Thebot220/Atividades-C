#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "");
    float b, h, A;
    printf("Informe a base do ret�ngulo: ");
    scanf("%f", &b);
    printf("Informe a altura do ret�ngulo: ");
    scanf("%f", &h);
    A = (b*h);
    printf("O ret�ngulo informado possui as dimens�es de %.2fm X %.2fm. Sua �rea total � de %.2f m�.", b, h, A);
}