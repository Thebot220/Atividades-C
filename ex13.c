#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "");
    float p, d, i, pf;
    printf("Informe o preço do carro que quer comprar: ");
    scanf("%f", &p);
    d = p*0.28;
    i = p*0.45;
    pf = p + d + i;
    printf("Após a adição dos impostos e da taxa do distribuidor o valor final do carro será de R$%.2f.", pf);
}