#include <iostream>

int main() {
    int num1;
    printf("Digite um numero: ");
    scanf("%d", &num1);
      int num2;
    printf("Digite um numero: ");
    scanf("%d", &num2);
      int num3;
    printf("Digite um numero: ");
    scanf("%d", &num3);

    int soma = num1 + num2 + num3;
    int divisao = soma / 3;

    printf("A média da distancia é: %d", divisao);

    return 0;
}