#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
    int opcao;
    double num1, num2, resultado;
    char continuar;

    while (1) {
        printf("===============================\n");
        printf("   Calculadora Simples\n");
        printf("===============================\n");
        printf("Selecione uma operação:\n");
        printf("1. Adição\n");
        printf("2. Subtração\n");
        printf("3. Multiplicação\n");
        printf("4. Divisão\n");
        printf("5. Sair\n");
        printf("Opção: ");

        if (scanf("%d", &opcao) != 1) {
            printf("Erro: opção inválida. Digite um número entre 1 e 5.\n\n");
            while (getchar() != '\n'); // limpa buffer
            continue;
        }

        if (opcao < 1 || opcao > 5) {
            printf("Erro: opção fora do intervalo. Digite um número entre 1 e 5.\n\n");
            continue;
        }

        if (opcao == 5) {
            printf("Obrigado por usar a calculadora! Até a próxima.\n");
            break;
        }

        printf("Digite o primeiro número: ");
        if (scanf("%lf", &num1) != 1) {
            printf("Erro: entrada inválida.\n\n");
            while (getchar() != '\n');
            continue;
        }

        printf("Digite o segundo número: ");
        if (scanf("%lf", &num2) != 1) {
            printf("Erro: entrada inválida.\n\n");
            while (getchar() != '\n');
            continue;
        }

        
        if (opcao == 1) {
            resultado = num1 + num2;
            printf("Resultado: %.2lf + %.2lf = %.2lf\n", num1, num2, resultado);
        } 
        else if (opcao == 2) {
            resultado = num1 - num2;
            printf("Resultado: %.2lf - %.2lf = %.2lf\n", num1, num2, resultado);
        } 
        else if (opcao == 3) {
            resultado = num1 * num2;
            printf("Resultado: %.2lf * %.2lf = %.2lf\n", num1, num2, resultado);
        } 
        else if (opcao == 4) {
            if (num2 == 0) {
                printf("Erro: Divisão por zero não é permitida.\n");
            } else {
                resultado = num1 / num2;
                printf("Resultado: %.2lf / %.2lf = %.2lf\n", num1, num2, resultado);
            }
        }

    
        while (1) {
            printf("Deseja realizar outra operação? (s/n): ");
            scanf(" %c", &continuar);
            continuar = tolower(continuar);

            if (continuar == 's') {
                printf("\n");
                break;
            } else if (continuar == 'n') {
                printf("Obrigado por usar a calculadora! Até a próxima.\n");
                return 0;
            } else {
                printf("Resposta inválida. Por favor, digite 's' para sim ou 'n' para não.\n");
            }
        }
    }

    return 0;
}
