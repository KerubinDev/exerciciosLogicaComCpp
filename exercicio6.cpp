#include <iostream>

int main() {
    int ano;
    printf("Digite um ano: ");
    scanf("%d", &ano);

    if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0))
    {
        printf("O ano é bixesto");
    }
    else
    {
        printf("O ano não é bixesto");
        }
    
    return 0;
}
