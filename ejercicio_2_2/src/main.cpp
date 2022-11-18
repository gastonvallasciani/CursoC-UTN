// Ejercicio 2.2: Dadas la base y altura de un rectángulo, imprimir su superficie.

#include <iostream>

int main()
{
	float base = 0;
	float altura = 0;
	float superficie = 0;

	std::cout << "Ingrese la base del triángulo" << std::endl;
	std::cin >> base;
	std::cout << "Ingrese la altura del triángulo" << std::endl;
	std::cin >> altura;
	std::cout << "La superficie del triángulo es: " << (base * altura) / 2 << std::endl;
}