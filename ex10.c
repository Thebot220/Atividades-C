#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "");
    float s, t;
    int h;
    printf("Informe quanto voc� ganha por hora: R$ ");
    scanf("%f", &s);
    printf("Infome quantas horas voc� trabalhou este m�s: ");
    scanf("%i", &h);
    t = s*h;
    printf("O total de seu sal�rio esse m�s ser� de %.2f.", t);
}