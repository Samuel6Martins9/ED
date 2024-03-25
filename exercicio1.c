// Lista 1
// 25/03/2024
// Samuuel da Silva Martins (samuelmartins.aluno@unipampa.edu.br) 

#include <stdio.h>
#include <stdlib.h>

int **criaMatriz(int m, int n);
void leiaMatriz(int **mat, int m, int n);
int somaMatriz(int **mat, int m, int n);
void liberaMatriz(int **mat, int m);
void imprimeMatriz(int **mat, int m, int n);

int main(){
    int m, n;

    printf("Escolha o número de linhas e colunas da matriz: ");
    scanf("%d %d", &m, &n);

    int **matriz = criaMatriz(m, n);

    int escolha;

    do {
        printf("1) Criar Matriz %d x %d\n", m, n);
        printf("2) Ler Matriz\n");
        printf("3) Somar Matriz\n");
        printf("4) Retornar elementos de determinada coluna da Matriz\n");
        printf("5) Sair\n");
        printf("Escolha: ");
        scanf("%d", &escolha);
        
        switch (escolha)
        {
        case 1:
            matriz = criaMatriz(m, n);
            break;
        case 2:
            leiaMatriz(matriz, m, n);
            break;
        case 3:
            printf("Resultado da soma da matriz: %d",somaMatriz(matriz, m, n));
            break;
        case 4:
            int coluna;
            printf("Escolha a coluna: ");
            scanf("%d", &coluna);
            break;
        case 5:
            printf("Programa encerrado!!");
            break;
        default:
            printf("Opção inválida");
            break;
        }
    } while(escolha != 5);

    liberaMatriz(matriz, m);
}

int **criaMatriz(int m, int n){
    int **mat = (int **)malloc(m * sizeof(int *));
    for(int i=0; i<n; i++){
        mat[i] = (int *)malloc(n * sizeof(int));
    }
    return mat;
}

void leiaMatriz(int **mat, int m, int n){
    printf("Digite os elementos da matriz: \n");

    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            scanf("%d", &mat[i][j]);
        }
    }
}

int somaMatriz(int **mat, int m, int n){
    int soma = 0;

    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            soma += mat[i][j];
        }
    }
    return soma;
}

int *colunaMat(int **mat, int m, int n, int ncoluna){

}

void liberaMatriz(int **mat, int m){
    for (int i=0; i<m; i++){
        free(mat[i]);
    }
    free(mat);
}

void imprimeMatriz(int **mat, int m, int n){
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}

void imprimeVet(int *vet, int n){

}