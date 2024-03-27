#include <iostream> //codigo funcional para o sistema errado ;-;

int main() {
    
    int tamanho1;
    int tamanho2;
    int tamanho3;
    
    printf("Tamanho do Lado 1: ");
    scanf("%d", &tamanho1);
    printf("Tamanho do Lado 2: ");
    scanf("%d", &tamanho2);
    printf("Tamanho do Lado 3: ");
    scanf("%d", &tamanho3);

   if ((tamanho1 && tamanho2 > tamanho3) || (tamanho1 && tamanho3 > tamanho2) || (tamanho2 && tamanho3 > tamanho1)){
    printf("É um triangulo");
   }
   else
   {
    printf("Não é um triangulo");
   }
}