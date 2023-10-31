#include<stdio.h>

void imprimirMatriz(int matriz[10][10]){
    for(int i = 0; i < 10; i ++){
       for(int j = 0; j < 10; j++){
           printf("%d\t", matriz[i][j]);
       }
       printf("\n");
    }
}

void trocarLinha2Linha8(int matriz[10][10]){
    
    int temp;
    for(int j = 0; j < 10; j++){
        temp = matriz[1][j];
        matriz[1][j] = matriz[7][j];
        matriz[7][j] = temp;
    }
}

void trocarcoColuna4Coluna10(int matriz[10][10]){
    int temp;
    for(int i = 0; i < 10; i++){
        temp = matriz[i][i];
        matriz[i][i] = matriz[i][9];
        matriz[i][9] = temp;
        
    }
}

void trocarcaDiagonais(int matriz[10][10]){
    
    int temp;
    for(int i = 0; i < 10; i++){
        temp = matriz[i][i];
        matriz[i][i] = matriz[i][9-i];
        matriz[i][9-i] = temp;
    }
}

void trocarLinha5Coluna10(int matriz[10][10]){
    
    int temp;
    for(int i = 0; i < 10; i++){
        temp = matriz[4][i];
        matriz[4][i] = matriz[i][9];
        matriz[i][9] = temp;
    }
}


main(){
    int matriz [10][10];

    for(int i = 0; i < 10; i ++){
       for(int j = 0; j < 10; j++){
        matriz[i][j] = i * 10 + j;
       }
    }

    imprimirMatriz(matriz);
    printf("\n");
    //trocarLinha2Linha8(matriz);
    //trocarcoColuna4Coluna10(matriz);
    //trocarcaDiagonais(matriz);
    trocarLinha5Coluna10(matriz);
    imprimirMatriz(matriz);
}

