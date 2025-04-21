#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "");
    float b, h, A;
    printf("Informe a base do retângulo: ");
    scanf("%f", &b);
    printf("Informe a altura do retângulo: ");
    scanf("%f", &h);
    A = (b*h);
    printf("O retângulo informado possui as dimensões de %.2fm X %.2fm. Sua área total é de %.2f m².", b, h, A);
}