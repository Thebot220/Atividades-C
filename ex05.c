#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "");
    int n;
    printf("Informe um n�mero: ");
    scanf("%i", &n);
    printf("O antecessor de %i � o n�mero %i", n, n - 1);
}