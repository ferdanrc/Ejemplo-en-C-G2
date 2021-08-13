/* 1. Hacer pull request en el repositorio de ejemplos en c
 * 2. Realizar un programa que realice lo siguiente
 *
 *  - Menu de opciones
 *  - Realizar las operaciones basicas
 *  - mostrar el resultado 
 *  - una opción de esas realizar otra operacion
 *  
 *  - Hacer un hola mundo
 *
 * 3. Subirlo al repositorio
 * 4. Elegir el codigo de un compañero para revision
 * 
 * */

#include <stdio.h>
#include <stdlib.h>

int menu(){
	int r=0;
	printf("\n ===================== Calculadora basica ==============================");
	printf("\n 1. Suma");
	printf("\n 2. Resta");
	printf("\n 3. Multiplicacion");
	printf("\n 4. Division");
	printf("\n 5. Salir");
	printf("\n Opcion:  ");
	scanf("%i",&r);
	return r;
}

int main(){
    int i,r,a,b,res;
	do{
		r=menu();
		if(r<5){
			printf("\nIntrodusca los valores:\n");
			printf("\n Valor a: "); scanf("%i",&a);
			printf("\n Valor b: "); scanf("%i",&b);
			switch (r){
				case 1: res=a+b; break;
				case 2: res=a-b; break;
				case 3: res=a*b; break;
				case 4: res=a/b; break;
				default: printf("\n Opcion invalida, intente nuevamente"); break;
			}
		printf("\nEl resultado es: %i",res);		
		}
	}while(r != 5);
    return 0;
}
