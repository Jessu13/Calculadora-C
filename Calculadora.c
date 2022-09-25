#include <stdio.h>
#include<string.h>
#include "cabecera.h"

int main(){

    float num1, resultado = 0;
    float num2;
    char signo;
    int valido = 1;
    int numR;

    printf("Hola, usted ha iniciado un proceso en la mejor calcudora.");
    printf("\n");

    printf("Ingrese operacion: ");
    scanf("%c", &signo);

    if (signo != 'r' && signo !='a' && signo != 'c' && signo != 'b'){

        printf("Ingrese el primer número: ");
        scanf("%f", &num1);

        printf("Ingrese el segundo número: ");
        scanf("%f", &num2);

    
        switch (signo) {
        case '+':
            resultado = suma(&num1,&num2);
            break;
        
        case '-':
            resultado = resta(&num1,&num2);
            break;

        case '*':
            resultado = multiplicacion(&num1,&num2);
            break;

        case '/':
            resultado = division(num1,num2);
            break;

        case '%':
            resultado = modulo(num1,num2);
            break;
        
        case 'p':
            resultado = potencia(num1,num2);
            break;
        
        case 'd':
            resultado = descuento(num1,num2);
            break;

        default:
            valido = 0;
        }

        
    if (valido)
        printf("El resultado es %.2f\n", resultado);
    else
        printf("Operacion invalida\n");

    return 0;
    }

    else if(signo == 'r' || signo == 'c' || signo == 'b') {

        switch (signo) {
        case 'r':
            printf("Ingrese el número: ");
            scanf("%f", &num1);
            resultado = raizCuadrada(num1);

            if (valido)
                printf("El resultado es %f\n", resultado);
            else
                printf("Operacion inválida\n");

            return 0;

            break;
        
        case 'c':
            printf("Ingrese el radio: ");
            scanf("%f", &num1);
            resultado = circunferencia(num1);

            if (valido)
                printf("El resultado es %f\n", resultado);
            else
                printf("Operacion inválida\n");

            return 0;
            break;
        
        case 'b':
            
            printf("Ingrese el número a convertir: ");
            scanf("%d", &numR);

            romanos(numR);
            break;

        default:
            valido = 0;
        }
    }

    else{
        
        char figura[20];
        printf("Ingrese nombre de la figura que requiere el cáculo del área y perimetro: ");
        scanf("%s", figura);

        int aux = strcmp(figura,"cuadrado");

        if (aux == 0){
            int lado;
            printf("Ingrese la longitud de sus lados (en cms): ");
            scanf("%d", &lado);

            printf("El área del cuadrado es: %d", areaCuadrado(lado));
            printf(" cms.");

            printf("\n");

            printf("El perimetro del cuadrado es: %d", perimetroCuadrado(lado));
            printf(" cms.");

        }
        else{
            int base, altura;
            printf("Ingrese la longitud de la base (en cms): ");
            scanf("%d", &base);

            printf("Ingrese la altura (en cms): ");
            scanf("%d", &altura);

            printf("El área del triángulo es: %d", areaTriangulo(base,altura));
            printf(" cms.");

        }

    }

}