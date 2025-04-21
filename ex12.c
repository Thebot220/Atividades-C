#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "");
    float s, r, t;
    printf("Informe o seu salário: ");
    scanf("%f", &s);
    printf("Informe o percentual de reajuste: ");
    scanf("%f", &r);
    t = s + (s*(r/100));
    printf("O seu novo salário com reajuste é de R$%.2f.", t);
}