#include <stdio.h>

int main() {
    int numero;
    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

   if (numero > 0 && numero % 2 == 0) {
        printf("1");
    } else {
        printf("0");
    }

    return 0;
}