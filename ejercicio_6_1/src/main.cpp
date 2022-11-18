// Ejercicio 6.1:Escribir una función que reciba como parámetros dos números no enteros y
// devuelva la multiplicación.Probarla con los valores 3 y 4

#include <iostream>

float func(float a, float b);

float func(float a, float b)
{
	return a * b;
}

int main()
{
	float mult = 0;

	mult = func(3, 4);

	std::cout << mult << std::endl;

	return(0);
}