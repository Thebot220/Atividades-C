#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "");
    float p, d, i, pf;
    printf("Informe o pre�o do carro que quer comprar: ");
    scanf("%f", &p);
    d = p*0.28;
    i = p*0.45;
    pf = p + d + i;
    printf("Ap�s a adi��o dos impostos e da taxa do distribuidor o valor final do carro ser� de R$%.2f.", pf);
}