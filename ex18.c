#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "");
    int c, l, p, A, pl, lt;
    printf("Informe a comprimento do comôdo em metros: ");
    scanf("%i", &c);
    printf("Informe a largura do comôdo em metros: ");
    scanf("%i", &l);
    printf("Informe a potência das lâmpadas utilizadas em watts: ");
    scanf("%i", &p);
    A = c*l;
    pl = 18/p;
    lt = pl*A;
    printf("Serão necessárias %i lâmpadas para uma boa iluminação nesse comôdo.", lt);
}