// Ejercicio 2.2: Dadas la base y altura de un rect�ngulo, imprimir su superficie.

#include <iostream>

int main()
{
	float base = 0;
	float altura = 0;
	float superficie = 0;

	std::cout << "Ingrese la base del tri�ngulo" << std::endl;
	std::cin >> base;
	std::cout << "Ingrese la altura del tri�ngulo" << std::endl;
	std::cin >> altura;
	std::cout << "La superficie del tri�ngulo es: " << (base * altura) / 2 << std::endl;
}