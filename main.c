#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	float temp, resultado;
	char u;
	
	while (1){
		printf("digite a temperatura e a unidade: ");
		scanf("%f %c", &temp, &u);
		printf("Digite a unidade para a qual quer a conversão: ");
		scanf(" %c", &u);
		
		printf("\n");
		
		if (u == "K" || u == "k"){
			resultado = (temp + 273.15);
			printf("A conversão de Fahrenheit para Celcius é %.2f F.", resultado);
			printf("\n\n");
		}else if (u == "F" || u == "f"){
			resultado = (temp - 32) * 5/9;
			printf("A conversão de Fahrenheit para Celcius é %.2f F.", resultado);
			printf("\n\n");
			
		}else if (u == "C" || u == "c"){
			resultado = (temp * 1.8) + 32;
			printf("A conversão de Celcius para Fahrenheit é %.2f C.", resultado);
			printf("\n\n");
			
		}else {
			break;
		}
		
		
		if (resultado > 37.78){
			printf("Você está com febre.\n");
		}else {
			printf("Você não está com febre.\n");
		}
		
	}
	return 0;
}