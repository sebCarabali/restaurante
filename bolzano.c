/****************************************************************************************
* > Programa que aplica el teorema de bolzano para encontrar los ceros de una función.
*
* > Autor: Sebastián Carabali (sebastiancc@unicauca.edu.co)
* > Fecha: 25 de Noviembre de 2014
****************************************************************************************/

#include <stdio.h>
#include <math.h>

#define EPSILON 0.00001

/* Funcion sobre la cual se va a aplicar el teorema */
float function(float x) {
    return (log(x)/sin(x)) * cos(x);
}

/* Funcion que evalua la funcion en un valor */
float eval(float value,float (*f)(float)) {
    return f(value);
}

/* Valor absoluto para un float */
float absoluteValue(float a) {
    if( a < 0) {
        return a*-1;
    }
    return a;
}

/* Funcion recursiva que aplica el teorema de bolzano */
float findRoot(float a, float b) {
    float mid = (a+b)/2;
    float ev = eval(mid, function);
    printf("MID = %f ============> EV = %f\n", mid, ev);
    if(absoluteValue(ev) <= EPSILON) {
        return mid;
    }
    if(eval(a,function) * ev < 0) {
        return findRoot(a, mid);
    } else {
        return findRoot(mid, b);
    }
}

/* Funcion principal */
int main(int argc, char *argv[]) {
    float a, b;
    printf("Programa que usa el teorema de Bolzano para hallar al menos un cero de una funcion en un intervalo [a,b]\n");
    printf("Ingrse el valor de a: ");
    scanf("%f", &a);
    printf("Ingrse el valor de b: ");
    scanf("%f", &b);
    float evalA = eval(a, function);
    float evalB = eval(b, function);
    if( evalA * evalB < 0) {
        printf("La función tiene un cero en x = %f\n", findRoot(a,b));
    } else if(evalA == 0) {
        printf("La función tiene un ceros en x = %f\n", a);
    } else if(evalB == 0) {
        printf("La función tiene un ceros en x = %f\n", b);
    } else {
        printf("No se cumple la condición necesaria del teorema\n");
    }
    return 0;
}
