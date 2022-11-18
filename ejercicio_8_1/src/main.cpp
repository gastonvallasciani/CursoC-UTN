// Ejercicio 8.1: Escribir un programa que pregunta al usuario la cantidad de valores a ingresar
// (enteros).Luego reserva un vector para esa cantidad de valores, lo completa con
// valores ingresados por el usuario, los muestra en orden inverso y finalmente libera
// la memoria que había reservado.

#include <iostream>

int main()
{
	int cantidad_de_valores = 0;
	int i = 0;

	std::cout << "Ingrese la cantidad de valores enteros a ingresar: " << std::endl;
	std::cin >> cantidad_de_valores;



	int* vec_enteros = new int[cantidad_de_valores];

	for (i = 0; i < cantidad_de_valores; i++)
	{
		std::cout << "Ingresar un valor entero: " << std::endl;
		std::cin >> vec_enteros[i];
	}
	for (i = cantidad_de_valores - 1; i > -1; i--)
	{
		std::cout << vec_enteros[i] << std::endl;
	}

	delete[i]vec_enteros;
}