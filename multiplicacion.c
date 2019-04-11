#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TamX 3
#define TamY 3

void inicializa(int imatriz[TamX][TamY]);

void multiplicar(int mmatrizA[TamX][TamY], int mmatrizB[TamX][TamY], int mmatrizC[TamX][TamY]);

void printMatriz(int pmatriz[TamX][TamY]);

int main(){
	srand(time(NULL));
	int matrizA[TamX][TamY];
	int matrizB[TamX][TamY];
	int matrizC[TamX][TamY];
	inicializa(matrizA);
	inicializa(matrizB);
	printf("\nLa primera matriz es:\n");
	printMatriz(matrizA);
	printf("\n");
	printf("La segunda matriz es:\n");
	printMatriz(matrizB);
	printf("\nLa multiplicacion de ambas matrices da como resultado la siguiente matriz:\n");
	multiplicar(matrizA, matrizB, matrizC);
	printMatriz(matrizC);

	return 0;
}

void inicializa(int imatriz[TamX][TamY]){
	int random;
	
	for (int j = 0; j < TamY; j++){
		for (int i = 0; i < TamX; i++){
			random = (1+(rand()%10));
			imatriz[i][j] = random;
		}
	}
}

void printMatriz(int pmatriz[TamX][TamY]){
	for (int j = 0; j < TamY; j++)
	{
		for (int i = 0; i < TamX; i++)
		{	
			printf("%d\t", pmatriz[i][j]);
		}
		printf("\n");
	}
}

void multiplicar(int mmatrizA[TamX][TamY], int mmatrizB[TamX][TamY], int mmatrizC[TamX][TamY]){
	for(int i=0;i<TamX;i++){
      	for(int j=0;j<TamY;j++){
          	mmatrizC[i][j]=0;
          	for(int k=0;k<TamX;k++){
            	mmatrizC[i][j]=(mmatrizC[i][j]+(mmatrizB[i][k]*mmatrizA[k][j]));
          	}
      	}
  	}
}

