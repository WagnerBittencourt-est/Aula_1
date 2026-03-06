#include <stdio.h>
#include <stdlib.h>
#include <conio.h> // Necessária para kbhit() e getch()

int main() {
    int num1, num2, soma;
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

    printf("Tecle enter para sair\n");
        // Simula um atraso para não inundar o terminal
    while (!kbhit()) {      
            }

    return 0;
}
