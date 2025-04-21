#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "");
    float c, v, r, cn, ct, rt, lt;
    printf("Informe o comprimento da pista em metros: ");
    scanf("%f", &c);
    printf("Informe o número total de voltas a serem percorridas: ");
    scanf("%f", &v);
    printf("Informe o número de reabastecimentos desejados: ");
    scanf("%f", &r);
    printf("Informe o consumo médio do carro em Km/L: ");
    scanf("%f", &cn);
    ct = c*v;
    rt = ct/r;
    lt = rt/(cn*1000);
    printf("Serão necessários %.2fL para o carro alcançar o primeiro reabastecimeto.", lt);
}