#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "");
    int F, C;
    printf("Informe a temperatura em Fahrenheit: ");
    scanf("%i", &F);
    C = ((F - 32)*5)/9;
    printf("A temperatura em °C é de %i.", C);
}