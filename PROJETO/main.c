#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

// aqui estamos criando um tipo aluno (que sera uma tabela)

struct aluno {
    int matricula;
    char nome[100];
    int idade;
    float ira;
};

typedef struct aluno aluno;

int main(int argc, char argv[]) {

    setlocale(LC_ALL, "Portuguese");

    aluno alunos[10][4];

    for (int lin = 1; lin < 10; lin++) {
        for (int col = 1; col < 4; col++) {
            if (col == 1) {
                puts("Nome:");
                scanf("%100[^\n]s", &alunos[lin][col].nome);
            } 
        }
    }





    return 0;
}