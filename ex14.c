#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "");
    float s, vc, c, tv, sf;
    printf("Informe o seu sal�rio fixo: R$ ");
    scanf("%f", &s);
    printf("Informe a quantidade de carros vendidos: ");
    scanf("%f", &vc);
    printf("Informe a quantidade de comiss�o ganha por venda: ");
    scanf("%f", &c);
    tv = vc*c;
    sf = s + (tv) + (tv*0.05);
    printf("O seu sal�rio este m�s ser� de R$%.2f.", sf);
}