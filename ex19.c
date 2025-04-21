#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "");
    float l, c, h, C, p1, p2, mt, at;
    printf("Informe a largura da cozinha em metros: ");
    scanf("%f", &l);
    printf("Informe o comprimento da cozinha em metros: ");
    scanf("%f", &c);
    printf("Informe a altura da cozinha em metros: ");
    scanf("%f", &h);
    C = l*c;
    p1 = l*h;
    p2 = c*h;
    mt = C+(2*p1)+(2*p2);
    at = mt/1.5;
    printf("Serão necessárias %f caixas de azulejos para preencher todas as superfícies dessa cozinha.", at);
}