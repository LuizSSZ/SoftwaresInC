#include <stdio.h>

int main(void){
    int resultado, num;
    char operador, continuar;

    // Solicita o primeiro número
    printf("Digite o primeiro número: ");
    scanf("%d", &resultado);

    do {
        // Solicita o operador
        printf("Digite o operador [+] | [-] | [*] | [/] ou [=] para calcular: ");
        scanf(" %c", &operador);

        // Verifica se o operador é [=] para calcular
        if (operador == '=')
        {
            printf("Resultado final: %d\n", resultado);
            break;
        }
            

        // Solicita o próximo número
        printf("Digite o próximo número: ");
        scanf("%d", &num);

        // Realiza a operação com base no operador
        switch (operador)
        {
            case '+':
                resultado += num;
                printf("Resultado até agora: %d\n", resultado);
                break;
            case '-':
                resultado -= num;
                printf("Resultado até agora: %d\n", resultado);
                break;
            case '*':
                resultado *= num;
                printf("Resultado até agora: %d\n", resultado);
                break;
            case '/':
                if (num != 0)
                {
                    resultado /= num;
                    printf("Resultado até agora: %d\n", resultado);
                    break;
                } else {
                    printf("Erro: Divisão por Zero!\n");
                }
                break;

            default:
                printf("Operador inválido!\n");
        }

        // Pergunta se o usuário deseja continuar
        printf("Deseja continuar? (s/n): ");
        scanf(" %c", &continuar);

    } while (continuar == 's' || continuar == 'S'); 

    printf("Resultado final: %d\n", resultado);
    printf("Fim da calculadora.\n");
    return 0;
}