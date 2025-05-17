#include <stdio.h>

int main(int argc, char *argv[]) {

	float altura, peso, indice_corporal;
	
	printf("\tBienvenido al programa BMI\n");
	
	printf("\nIngrese su peso(kg): ");
	scanf("%f", &peso);
	
	printf("Ingrese su altura(mts): ");
	scanf("%f", &altura);
	
	indice_corporal = peso / (altura * altura);
	printf("\nSu indice corporal es: %.1f",indice_corporal);
	
	printf("\n\n\t<< TABLA REFERENCIAL >>\n");
	
	printf("\n· Menor 18.5  - Bajo peso \n· 18.5 a 24.9 - Normal \n· 25.0 a 29.9 - Sobrepeso \n· mayor a 30  - Obesidad");
	
	return 0;
}

