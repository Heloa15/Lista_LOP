#include <stdio.h>
#include <string.h>

struct Aluno {
    char nome[100];
    int idade;
    float nota;
};

int main() {
    struct Aluno alunos[3];
    char busca[100];
    int i, encontrado = 0;

    // Cadastro dos alunos
    for(i = 0; i < 3; i++) {
        printf("Aluno %d\n", i + 1);

        printf("Nome: ");
        scanf(" %[^\n]", alunos[i].nome);

        printf("Idade: ");
        scanf("%d", &alunos[i].idade);

        printf("Nota: ");
        scanf("%f", &alunos[i].nota);

        printf("\n");
    }

    // Busca por nome do aluno
    printf("Digite o nome do aluno que deseja buscar: ");
    scanf(" %[^\n]", busca);

    for(i = 0; i < 3; i++) {
        if(strcmp(alunos[i].nome, busca) == 0) {
            printf("\nAluno encontrado:\n");
            printf("Nome: %s\n", alunos[i].nome);
            printf("Idade: %d\n", alunos[i].idade);
            printf("Nota: %.2f\n", alunos[i].nota);
            encontrado = 1;
            break;
        }
    }

    if(!encontrado) {
        printf("\nAluno não encontrado.\n");
    }

    return 0;
}

