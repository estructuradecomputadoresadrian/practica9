#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TamX 5
#define TamY 5

void inicializa(int imatriz[TamX][TamY]);

int valorMaximo(int vmatriz[TamX][TamY]);

void printMatriz(int pmatriz[TamX][TamY]);

int main(){
	srand(time(NULL));
	int matrizA[TamX][TamY];
	inicializa(matrizA);
	printf("\nLa matriz generada es :\n");
	printMatriz(matrizA);
	int maximo = valorMaximo(matrizA);
	printf("El valor maximo de la matriz introducida es %d.\n", maximo);
	return 0;
}

void inicializa(int imatriz[TamX][TamY]){
	for (int j = 0; j < TamY; j++){
		for (int i = 0; i < TamX; i++){
			imatriz[i][j] = (4+(rand()%6));
		}
	}
}

void printMatriz(int pmatriz[TamX][TamY]){
	for (int j = 0; j < TamY; j++){
		for (int i = 0; i < TamX; i++){	
			printf("%d\t", pmatriz[i][j]);
		}
		printf("\n");
	}
}

int valorMaximo(int vmatriz[TamX][TamY]){
	int maximo = vmatriz[0][0];
	for (int j = 0; j < TamY; j++){
		for (int i = 0; i < TamX; i++){	
			if (vmatriz[i][j] > maximo){
				maximo = vmatriz[i][j];
			}
		}
	}
	return maximo;
}
