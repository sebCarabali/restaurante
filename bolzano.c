#include <stdio.h>
#include <math.h>

#define EPSILON 0.00001

float function(float x)
{
	return sin(x) / pow(x, 2);
}

float eval(float value,float (*f)(float))
{
	return f(value);
}

float absoluteValue(float a) {
	if( a < 0){
		return a*-1;
	}
	return a;
}

float findRoot(float a, float b)
{
	float mid = (a+b)/2;
	float ev = eval(mid, function);
	printf("MID = %f ============> EV = %f\n", mid, ev);
	if(absoluteValue(ev) <= EPSILON) {
		return mid;
	}
	if(eval(a,function) * eval(mid, function) < 0) {
		return findRoot(a, mid);
	} else {
		return findRoot(mid, b);
	}
}

int main(int argc, char *argv[])
{
	float a, b;
	printf("Programa que usa el teorema de Bolzano para hallar los 0 de una funcion en un intervalo [a,b]\n");
	printf("Ingrse el valor de a: ");
	scanf("%f", &a);
	printf("Ingrse el valor de b: ");
	scanf("%f", &b);
	if(eval(a, function) * eval(b, function) < 0) {
		printf("La función tiene un 0 en x = %f\n", findRoot(a,b));
	} else if(eval(a, function) == 0) {
		printf("La función tiene un 0 en x = %f\n", a);
	} else if(eval(b, function) == 0) {
		printf("La función tiene un 0 en x = %f\n", b);
	} else {
		printf("No se cumple la condición necesaria del teorema\n");
	}
	return 0;
}

