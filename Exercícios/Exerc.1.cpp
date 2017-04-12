#include<stdio.h>

int main (){
	int vetor[10];
	int matriz[3][4];
	int i,j;
	
	for (i=0;i<10;i++){
		printf("Digite o %do valor do Vetor:",i+1);
		scanf("%d",&vetor[i]);
		printf("\n");
	}
	
	printf("Vetor é :\n");
	
	for(i=0;i<10;i++){
		printf("%do=%d ",i+1,vetor[i]);
	}
	
	printf("\n");
	
	for(i=0;i<3;i++){
		for(j=0;j<4;j++){
					printf("\nDigite o valor da %da linha e %da coluna da Matriz:",i+1,j+1);
					scanf("%d",&matriz[i][j]);
		}
	}
	
	printf("\n");
	
	for(i=0;i<3;i++){
		for(j=0;j<4;j++){
					printf("%d ",matriz[i][j]);
		}
		printf("\n");
	}
	
	
	return 0;
}
