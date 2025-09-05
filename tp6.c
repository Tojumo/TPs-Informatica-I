#include <stdio.h>
#include <math.h>

float calcularAreaRectangulo(float longitud, float altura){
	float area;
	return area = longitud * altura;
}

float calcularPerimetroRectangulo(float longitud, float altura){
	float perimetro;
	return perimetro = 2 * (longitud + altura);
}

float calcularDiagonalRectangulo(float longitud, float altura){
	float diagonal;
	return diagonal = sqrt((longitud * longitud )+(altura * altura));
}

	
float calcularAreaCirculo(float radio){
	float area;
	return area = M_PI * (radio * radio);
}
	
float calcularPerimetroCirculo(float radio){	
	float perimetro;
	return perimetro = M_PI * radio;
}

void imprimirResultados(float area, float perimetro, float diagonal){
	
	printf("\nEl perimetro es: %.2f", perimetro);
	printf("\nEl area es: %.2f", area);
	if(diagonal){
		printf("\nLa diagonal es: %.2f", diagonal);
	}
}
	
int main(int argc, char *argv[]) {
	int opcion;
	
	printf("\t\tBienvenido\n");
	printf("\n\tRect�ngulo '1' - C�rculo '2'");
	printf("\n\nIngrese una opci�n: ");
	scanf("%d", &opcion);
	
	while(opcion > 2 | opcion < 1){
		
		printf("Ingrese una opci�n valida: ");
		scanf("%d", &opcion);
	}
	
	if (opcion == 1){
		
		float area, perimetro, diagonal, longitud, altura;;
		printf("Ingrese la longitud del rect�ngulo: ");
		scanf("%f", &longitud);
		printf("Ingrese la altura del rect�ngulo: ");
		scanf("%f", &altura);
		
		area = calcularAreaRectangulo(longitud, altura);
		perimetro = calcularPerimetroRectangulo(longitud, altura);
		diagonal = calcularDiagonalRectangulo(longitud, altura);
		imprimirResultados(perimetro, area, diagonal);
			
	}
	else{
		
		float area, perimetro, radio;
		printf("Ingrese el radio del circulo:  ");
		scanf("%f", &radio);
		
		area = calcularAreaCirculo(radio);
		perimetro = calcularPerimetroCirculo(radio);
		imprimirResultados(perimetro, area, 0);
		
	}
	
	return 0;
}

