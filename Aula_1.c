#include <stdio.h>
#include <stdlib.h>


int main() {
    int num1, num2, soma, sair;
   
    system("cls"); // Limpa a tela (funciona no Windows)
    // Lendo dois números do usuário
    printf(" ==== \n ");
    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);
    printf(" ==== \n ");
    printf("Digite o segundo numero: ");
    scanf("%d", &num2);

    // Calculando a soma dos dois números
    soma = num1 + num2;
    printf(" === \n ");
    // Exibindo o resultado
    printf("A soma de %d e %d é: %d\n", num1, num2, soma);

    printf("Digite 1 para sair\n");
       
    scanf("%d", &sair); // Lê a entrada do usuário
   
    return 0;
}
