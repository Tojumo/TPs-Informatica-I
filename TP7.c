//https://github.com/Tojumo/TPs-Informatica-I
#include <stdio.h>
#define TAM 5

void cargar_productos(long int*, float*);
void imprimir_productos(long int*, float*);
void imprimir_mas_caro(long int*, float*);
void imprimir_mas_barato(long int*, float*);

int main(){
	
	long int codigos[TAM] = {0};
	float precios[TAM] = {0};
	long int *p = codigos;
	float *q = precios;
	
	printf("Ingrese %d productos [Código] y [Precio]\n\n", TAM);
	
	cargar_productos(p, q);
	imprimir_productos(p, q);
	imprimir_mas_caro(p, q);
	imprimir_mas_barato(p, q);
	
	return 0;
}
	
void cargar_productos(long int *codigos, float *precios){
	
	for(int i = 0; i < TAM; i++){
		
		printf("\nIngrese código de barras: ");
		scanf("%ld", codigos + i);
		
	
		while( *(codigos + i) < 0 || *(codigos + i) > 999999999){
			printf("\nERROR.Fuera de rango de codigo(1-999999999): ");
			scanf("%ld", codigos + i);
		}
			
		printf("\nIngrese el precio: ");
		scanf("%f", precios + i);
		
		while((*(precios + i)) < 0){
			
			printf("\nERROR.Ingrese un precio positivo: ");
			scanf("%f", precios + i);
		}
	}
}
	
void imprimir_productos(long int*codigos, float*precios){
	
	printf("\n[Código] ---- [Precio]\n");
	
	for(int i = 0; i < TAM; i++){
		printf("  %-12ld $%.2f\n", *(codigos+i), *(precios+i));
	}
	printf("\n");
}

void imprimir_mas_caro(long int*codigos, float*precios){
	
	float mayor = *precios;
	int posicion;	
	for(int i = 0; i < TAM; i++){
		
		if(*(precios + i) > mayor){
			mayor = *(precios + i);
			posicion = i;
		}
	}
	printf("Más caro: [%ld] $%.2f\n", *(codigos + posicion), mayor);
}

void imprimir_mas_barato(long int*codigos, float*precios){
	
	float menor = *precios;
	int posicion;	
	for(int i = 0; i < TAM; i++){
		
		if(*(precios + i) < menor){
			menor = *(precios + i);
			posicion = i;
		}
	}
	printf("Más barato: [%ld] $%.2f\n", *(codigos + posicion), menor);
}
