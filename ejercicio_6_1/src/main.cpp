// Ejercicio 6.1:Escribir una funci�n que reciba como par�metros dos n�meros no enteros y
// devuelva la multiplicaci�n.Probarla con los valores 3 y 4

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