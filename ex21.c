#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "");
    float c, v, r, cn, ct, rt, lt;
    printf("Informe o comprimento da pista em metros: ");
    scanf("%f", &c);
    printf("Informe o n�mero total de voltas a serem percorridas: ");
    scanf("%f", &v);
    printf("Informe o n�mero de reabastecimentos desejados: ");
    scanf("%f", &r);
    printf("Informe o consumo m�dio do carro em Km/L: ");
    scanf("%f", &cn);
    ct = c*v;
    rt = ct/r;
    lt = rt/(cn*1000);
    printf("Ser�o necess�rios %.2fL para o carro alcan�ar o primeiro reabastecimeto.", lt);
}