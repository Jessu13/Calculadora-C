#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Suma
float suma(float *p1, float *p2){
    float sum;
    sum = *p1 + *p2;

    return sum;
}

// Resta
float resta(float *p1, float *p2){
    float resta;
    resta = *p1 - *p2;

    return resta;
}

// Multiplicación
float multiplicacion(float *p1, float *p2){
    float multiplicacion;
    multiplicacion = *p1 * *p2;

    return multiplicacion;
}

// División
float division(float p1, float p2){
    float division;
    division = p1 / p2;

    return division;
}

// Módulo
int modulo(float p1, float p2){
    int modulo;
    modulo = (int)p1 % (int)p2;

    return modulo;
}

double valorAbsoluto(double numero){
    if (numero < 0)
    {
        return numero * -1;
    }
    return numero;
}

// Potencia
float potencia(float x, float n){
    if(x==0){
        return 0;
    }
    float result = x;
    for (int i=1;i<n;i++){
        result=result*x;
    }
    return result;
}

// Raíz
float raizCuadrada(int numero){
    float margen = 0.000001;
    float estimacion = 1.0;
   
    while (valorAbsoluto((estimacion * estimacion) - numero) >= margen){
        float cociente = numero / estimacion;
        float promedio = (cociente + estimacion) / 2.0;
        
        estimacion = promedio;
    }
    return estimacion;
}

// Descuento porcentaje a un valor.
float descuento(float x, float porcentaje){
    return x-(x*(porcentaje/100));
}

//Longitud de circunferencia
double circunferencia(double r){
    double PI = 3.14159265358979323846;
    return 2*r*PI;
}

// Perimetro cuadrado
int perimetroCuadrado(int lado){
    return 4*lado;
}


int areaCuadrado(int lado){
    int area = lado*lado;

    return area;
}

int areaTriangulo(int base, int altura){
    int area = (base*altura)/2;

    return area;
}

//Números romanos
void romanos(int k){
    int m,d,c,l,x,v,i,nm,nd,nc,nl,nx,nv=0;
    int divs[]={1000,900,500,400,100,90,50,40,10,9,5,4,1};
    int num[] = {m,nm,d,nd,c,nc,l,nl,x,nx,v,nv,i};
    char cadena[][8] = {"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I",'\0'};
    div_t actual;
    for (int i=0;i<13;i++){
        actual = div(k,divs[i]);
        num[i]=actual.quot;
        k=actual.rem;
        //printf("\n--k:%i--div:%i---i:%i\n",k,divs[i],i);
    }
    char result[100];   
    for (int i=0;i<13;i++){
        for (int j=0;j<num[i];j++){
            strcat(result, cadena[i]);
        }
    }
    printf("\n%s\n", result);
}