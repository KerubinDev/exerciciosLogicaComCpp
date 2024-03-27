#include <iostream>

int main() {
    int numero;
    printf("Digite um numero: ");
    scanf("%d", &numero);

    if (numero >= 0){
        printf("O numero %d é 0. \n", numero);
    }
    else{
        printf("O numero %d é 1. \n", numero);
    }

    return 0;
}