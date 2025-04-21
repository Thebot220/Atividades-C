#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "");
    int n;
    printf("Informe um número: ");
    scanf("%i", &n);
    printf("O antecessor de %i é o número %i", n, n - 1);
}