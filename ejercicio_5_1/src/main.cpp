// Ejercicio 5.1: Ingresar un vector de 10 números enteros e informar el promedio.

#include <iostream>

int main()
{
	int vec[10] = { 0 };
	int i = 0;
	int suma = 0;
	float promedio = 0;

	for (i = 0; i < 10; i++)
	{
		std::cout << "Ingresar un numero entero" << std::endl;
		std::cin >> vec[i];
		suma += vec[i];
	}

	promedio = float(suma / 10);

	std::cout << "Promedio: " << promedio << std::endl;

	return(0);
}