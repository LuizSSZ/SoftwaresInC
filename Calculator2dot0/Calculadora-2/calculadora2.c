#include <stdio.h>

int main(void){
    int num1, num2, resultado;
    char operador, continuar;

    do
    {
        // Solicita o primeiro número
        printf("Digite o primeiro número: ");
        scanf("%d", &num1);

        // Solicita o operador
        printf("Digite o operador (+, -, x, /):\n");
        printf("'+' : Adição\n");
        printf("'-' : Subtração\n");
        printf("'x' : Multiplicação\n");
        printf("'/' : Divisão\n");
        scanf(" %c", &operador);
        
        // Solicita o segundo número
        printf("Digite o segundo número: ");
        scanf("%d", &num2);

        // Realiza a operação com base no operador

        switch (operador)
        {
        case '+':
            resultado = num1 + num2;
            printf("Resultado: %d\n", resultado);
            break;
        case '-':
            resultado = num1 - num2;
            printf("Resultado: %d\n", resultado);
            break;
        case 'x':
            resultado = num1 * num2;
            printf("resultado: %d\n", resultado);
            break;
        case '/':
            if (num2 != 0) {
                resultado = num1 / num2;
                printf("Resultado: %d\n", resultado);
            } else {
                printf("Erro: Divisão por zero!\n");
            }
            break;
        default:
            printf("Operador inválido\n");

        }
        
        // Pergunta se o usuário deseja continuar
        printf("Deseja realizar outra operação? (s/n): ");
        scanf(" %c", &continuar);
    } while (continuar == 's' || continuar == 'S'); 
    
    printf("Fim da calculadora.\n");
    return 0;

}