#include <iostream>

int main() {
    float nota1, nota2, nota3;
    float peso1, peso2, peso3;
    float mediaPonderada;

    printf("Digite a primeira nota e seu peso: ");
    scanf("%f %f", &nota1, &peso1);

    printf("Digite a segunda nota e seu peso: ");
    scanf("%f %f", &nota2, &peso2);

    printf("Digite a terceira nota e seu peso: ");
    scanf("%f %f", &nota3, &peso3);

    mediaPonderada = (nota1 * peso1 + nota2 * peso2 + nota3 * peso3) / (peso1 + peso2 + peso3);

    printf("A média ponderada é: %.2f\n", mediaPonderada);

    return 0;
}