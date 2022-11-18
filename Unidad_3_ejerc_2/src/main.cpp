#include <iostream>
//#include "ejer2.2/Rectangulo.h"
#include "ejer2.3/Rectangulo.h"

int main()
{
	/* Ejer2.2
	int cantidad = 0;
	int i = 0;

	std::cout << "Ingrese la cantidad de instancias con las que va a trabajar: " << std::endl;
	std::cin >> cantidad;

	Rectangulo* vec_rect =  new Rectangulo[cantidad]();

	for (i = 0; i < cantidad; i++)
	{
		std::cout << "BASE RECTANGULO :" << vec_rect[i].Get_base() << " INDICE: " << i << std::endl;
		std::cout << "ALTURA RECTANGULO :" << vec_rect[i].Get_base() << " INDICE: " << i << std::endl;
	}

	delete[]vec_rect;
	*/
	int cantidad = 0;
	int i = 0;

	std::cout << "Ingrese la cantidad de instancias con las que va a trabajar: " << std::endl;
	std::cin >> cantidad;

	Rectangulo* vec_rect[i] = new Rectangulo(1,2);

	for (i = 0; i < cantidad; i++)
	{
		std::cout << "BASE RECTANGULO :" << vec_rect[i].Get_base() << " INDICE: " << i << std::endl;
		std::cout << "ALTURA RECTANGULO :" << vec_rect[i].Get_base() << " INDICE: " << i << std::endl;
	}

	delete[]vec_rect;
}