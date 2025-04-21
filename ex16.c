#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "");
    float n1, n2, n3, mf;
    printf("Informe a sua primeira nota: ");
    scanf("%f", &n1);
    printf("Informe a sua segunda nota: ");
    scanf("%f", &n2);
    printf("Informe a sua terceira nota: ");
    scanf("%f", &n3);
    mf = ((n1*2)+(n2*3)+(n3*5))/10;
    printf("A média das notas informadas é de %.2f.", mf);
}