#include <stdio.h>

// Fun��o para verificar se um n�mero pertence � sequ�ncia de Fibonacci
int pertence_fibonacci(int num) {
    int a = 0, b = 1, c = 0;

    while (c < num) {
        c = a + b;
        a = b;
        b = c;
    }
    
    return (c == num) ? 1 : 0; // Retorna 1 se pertence, 0 caso contr�rio
}

int main() {
    int numero;

    printf("Informe um numero: ");
    scanf("%d", &numero);

    if (pertence_fibonacci(numero)) {
        printf("O numero %d pertence a sequencia de Fibonacci.\n", numero);
    } else {
        printf("O numero %d nao pertence a sequencia de Fibonacci.\n", numero);
    }

    return 0;
}

