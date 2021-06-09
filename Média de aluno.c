#include <stdio.h>
#include <stdlib.h>

/* Programa em linguagem C para calcular a média do aluno. */

int main(void) {
	printf("Para esse programa, digite o separador decimal com ponto.\n");
	int falta=0;
	float nota1=0, nota2=0, media=0;
	printf("Digite primeira nota:");
	scanf("%f",&nota1);
	printf("Digite segunda nota:");
	scanf("%f",&nota2);
	media=(nota1+nota2)/2;
	printf("Media do aluno:%.2f\n",media);
	
	printf("Digite o numero de faltas do aluno:");
	scanf("%d",&falta);
	
	if(media>7&&falta<25){
		
		printf("Aluno aprovado.\n");
	}
	else{
		printf("Aluno reprovado.\n");
	}
	printf("Fim do programa.\n");
	system("pause");
	
	return 0;
}

