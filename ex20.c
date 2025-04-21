#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "");
    float km1, km2, cg, vr, km, l;
    printf("Informe a quilometragem inicial do dia: ");
    scanf("%f", &km1);
    printf("Informe a quilometragem final do dia: ");
    scanf("%f", &km2);
    printf("Informe a quantidade de combustível gasto: ");
    scanf("%f", &cg);
    printf("Informe a valor total recebido: R$");
    scanf("%f", &vr);
    km = (km2-km1)/cg;
    l = vr-(cg*2.90);
    printf("A média de consumo diária foi de %.2fKm/L. Além disso, o lucro de hoje foi um total de R$%.2f.", km, l); 
}