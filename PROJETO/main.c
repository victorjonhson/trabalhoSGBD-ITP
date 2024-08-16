#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

// aqui estamos criando um tipo aluno (que sera uma tabela)

struct aluno { 
    // a matricula será a primary key
    int matricula;
    char nome[100];
    int idade;
    float ira;
};

typedef struct aluno aluno;

int main(int argc, char *argv[]) {

    setlocale(LC_ALL, "Portuguese");

    // criando uma tabela do tipo aluno
    aluno alunos[1][4];
    int lin;
    int col;

    //int contLinha = 1;

    // percorrendo linha da tabela e adicionando dados nas colunas
    for (lin = 0; lin < 1; lin++) {
        for (int col = 0; col < 4; col++) {
            if (col == 0) {
                puts("Matricula (chave primária):");
                scanf("%d", &alunos[lin][col].matricula);

            } else if (col == 1) {
                puts("Nome:");
                scanf("%s", alunos[lin][col].nome);

            } else if (col == 2) {
                puts("Idade:");
                scanf("%d", &alunos[lin][col].idade);

            } else if (col == 3) {
                puts("Indice Academico:");
                scanf("%f", &alunos[lin][col].ira);
            } 
        }
    }

    // immprimindo tabela
    printf("------------------ Alunos   ----------------- \n");
    printf("Matricula | Nome       | Idade | Ira \n");
    for (lin = 0; lin < 1; lin++) {
        for (col = 0; col < 4; col++) {
            if (col == 0) {
                printf("%d         | ", alunos[lin][col].matricula);
            } else if (col == 1) {
                printf("%s     | ", alunos[lin][col].nome);

            } else if (col == 2) {
                printf("%d    | ", alunos[lin][col].idade);

            } else if (col == 3) {
                printf("%.2f", alunos[lin][col].ira);
            } 
        }

        printf("\n--------------------------------------------- \n");
    }

    return 0;
}