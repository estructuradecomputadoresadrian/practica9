#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TamX 8
#define TamY 5

void inicializa(int imatriz[TamX][TamY]);

void printMatriz(int pmatriz[TamX][TamY]);

void filaminima(int fmatriz[TamX][TamY], int fvector[TamY]);

int main(){
	srand(time(NULL));
	int matriz[TamX][TamY], vector[TamY];
	inicializa(matriz);
	printf("La matriz generada es:\n");
	printMatriz(matriz);
	filaminima(matriz, vector);
	int aux = 1;
	for (int i = 0; i < TamY; i++){
		printf("El valor minimo de la fila %d es %d.\n", aux, vector[i]);
		aux++;
	}
	return 0;
}

void inicializa(int imatriz[TamX][TamY]){
	for (int j = 0; j < TamY; j++){
		for (int i = 0; i < TamX; i++){
			imatriz[i][j] = (1+(rand()%10));
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

void filaminima(int fmatriz[TamX][TamY], int fvector[TamY]){
	for (int j = 0; j < TamX; j++){
		for (int k = 0; k < TamY; k++)
		{
			fvector[k]=fmatriz[0][j];
		for (int i = 0; i < TamX; i++){
			if (fvector[i]< fmatriz[i][j]){
				fvector[i]= fmatriz[i][j];
			}		
		}
	}	
	}
}
