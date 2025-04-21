#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "");
    float e, b, n, v, pb, pn, pv;
    printf("Informe a quantidade de eleitores da cidade: ");
    scanf("%f", &e);
    printf("Informe a quantidade de votos em branco: ");
    scanf("%f", &b);
    printf("Informe a quantidade de votos nulos: ");
    scanf("%f", &n);
    printf("Informe a quantidade de votos válidos: ");
    scanf("%f", &v);
    pb = (b/e)*100;
    pn = (n/e)*100;
    pv = (v/e)*100;
    printf("A porcentagem de votos em branco, nulos e válidos são, respectivamente, %.2f%%, %.2f%%, %.2f%%.", pb, pn, pv);
}