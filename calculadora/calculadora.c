#include <stdio.h>

void menu();
int suma(int a, int b);
int resta(int a, int b);
int mult(int a, int b);
float division(int a, int b);


int main(){
    menu();
    return 0;
}

void menu(){
    int opc = 0;
    int a, b;
    do{
        printf("\tPrograma de calculadora\n");
        printf("1. Suma\n");
        printf("2. Resta\n");
        printf("3. Multiplicacion\n");
        printf("4. Division\n");
        printf("0. Salir\n");
        pritnf("Opcion: ");

        scanf("%d", &opc);

        if(opc > 0 && opc < 5){
            printf("\nDame el primer numero entero: ");
            scanf("%d", &a);
            printf("\nDame el segundo numero entero: ");
            scanf("%d", &b);
        }
        switch(opc){
            case 0:
                printf("\n\n\tSaliendo...");
                break;
            case 1:
                printf("\n\nResultado %d + %d = %d", a, b, suma(a,b));
                break;
            case 2:
                printf("\n\nResultado %d - %d = %d", a, b, resta(a,b));
                break;
            case 3:
                printf("\n\nResultado %d * %d = %d", a, b, mult(a,b));
                break;
            case 4:
                if(b==0){
                    printf("\n\nNo se puede dividir entre 0.");
                }else{
                    printf("\n\nResultado %d / %d = %.2f", a, b, division(a,b));
                }
                break;
            default:
                printf("\n\n\t Opcion incorrecta, vuelve a elegir.");
                break;
        }
        printf("\n\n========================================\n\n");
    } while(opc != 0);
}

int suma(int a, int b){
    return a + b;
}

int resta(int a, int b){
    return a - b;
}

int mult(int a, int b){
    return a * b;
}

float division(int a, int b){
    return a / (b*1.0);
}
