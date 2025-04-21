#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "");
    int a, m, d, t;
    printf("Quantos anos desde o seu ano de nascimento se passaram? ");
    scanf("%i", &a);
    printf("Quantos meses desde o seu mês de nascimento se passaram? ");
    scanf("%i", &m);
    printf("Quantos dias desde o seu dia de nascimento de passaram? ");
    scanf("%i", &d);
    t = (a*365) + (m*30) + d;
    printf("Você viveu, em dias, um total de %i.", t);
}