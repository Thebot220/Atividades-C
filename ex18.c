#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "");
    int c, l, p, A, pl, lt;
    printf("Informe a comprimento do com�do em metros: ");
    scanf("%i", &c);
    printf("Informe a largura do com�do em metros: ");
    scanf("%i", &l);
    printf("Informe a pot�ncia das l�mpadas utilizadas em watts: ");
    scanf("%i", &p);
    A = c*l;
    pl = 18/p;
    lt = pl*A;
    printf("Ser�o necess�rias %i l�mpadas para uma boa ilumina��o nesse com�do.", lt);
}