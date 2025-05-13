#include <stdio.h>

int main() {
    int num, i;
    int fatorial = 1;

//Solicite o número ao usuário
    printf("Digite um número inteiro não negativo: ");
    scanf("%d", &num);

    if(num < 0) {
        printf("Fatorial não é definido para números negativos.\n");
    } else {
        //Usar um loop for para calcular o fatorial multiplicando os inteiros 
        for(i = 1; i <= num; i++) {
            fatorial *= i;
        }
        printf("%d! = %d\n", num, fatorial);
    }

    return 0;
}
