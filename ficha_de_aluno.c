#include <stdio.h>

typedef struct
{
    char nome[50];
    char disciplina[50];
    float nota_prova_1;
    float nota_prova_2;
    float nota_prova_3;
} ficha_de_aluno;

ficha_de_aluno capturaInfoAluno(int aluno, ficha_de_aluno ficha)
{
    printf("Digite o nome e a disciplina do aluno: %d\n", aluno);
    fflush(stdin);
    fgets(ficha.nome, 50, stdin);
    fflush(stdin);
    fgets(ficha.disciplina, 50, stdin);

    printf("Digite as notas: %d\n", aluno);
    scanf("%f", &ficha.nota_prova_1);
    scanf("%f", &ficha.nota_prova_2);
    scanf("%f", &ficha.nota_prova_3);
    return ficha;
}

void apresentaInfo(int aluno, ficha_de_aluno ficha)
{
    printf("\nALUNO %d\nnome: %sdisciplina: %snota: %.2f\n", aluno, ficha.nome, ficha.disciplina, ((ficha.nota_prova_1 + ficha.nota_prova_2 + ficha.nota_prova_3) / 3));
}

void main()
{
    ficha_de_aluno aluno01;
    ficha_de_aluno aluno02;
    ficha_de_aluno aluno03;

    aluno01 = capturaInfoAluno(1, aluno01);
    aluno02 = capturaInfoAluno(2, aluno02);
    aluno03 = capturaInfoAluno(3, aluno03);

    apresentaInfo(1, aluno01);
    apresentaInfo(2, aluno02);
    apresentaInfo(3, aluno03);
}