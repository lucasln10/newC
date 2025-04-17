#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");

	float temp;
	char u;

	while (1){

		printf("digite a temperatura e a unidade: ");
		scanf("%f %c", &temp, &u);
		printf("Digite a unidade para a qual quer a conversão: ");
		scanf(" %c", &u);
		printf("\n");
		if (u == 'K' || u == 'k'){
			float result = (temp + 273.15);
			printf("A conversão de Fahrenheit para Celcius é %.2f F.", result);
			printf("\n\n");
		}
		if (u == 'F' || u == 'f'){
			float result = (temp - 32) * 5/9;
			printf("A conversão de Fahrenheit para Celcius é %.2f F.", result);
			printf("\n\n");

		}else if (u == 'C' || u == 'c'){
			float result = (temp * 1.8) + 32;
			printf("A conversão de Celcius para Fahrenheit é %.2f C.", result);
			printf("\n\n");

		}else{
		    printf("ENCERRANDO!!!");
		    break;
		}
	}
	return 0;
}
