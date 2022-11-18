#include <iostream>
#include "ejer2.4/Rectangulo.h"

int main()
{
	int cantidad = 0;
	int i = 0;
	int base_aux, altura_aux;

	std::cout << "Ingrese la cantidad de instancias con las que va a trabajar: " << std::endl;
	std::cin >> cantidad;

	Rectangulo* vec_rect{ new Rectangulo[cantidad] };

	for (i = 0; i < cantidad; i++)
	{
		std::cout << "Ingrese la base del rectangulo " << i + 1 << std::endl;
		std::cin >> base_aux;
		std::cout << "Ingrese la altura del rectangulo " << i + 1 << std::endl;
		std::cin >> altura_aux;

		vec_rect[i].Set_altura(altura_aux);
		vec_rect[i].Set_base(base_aux);
	}

	int area_aux = 0, mayor_area = 0;
	for (i = 0; i < cantidad; i++)
	{
		area_aux = vec_rect[i].MayorArea(vec_rect[i]);

		if (area_aux > mayor_area)
			mayor_area = area_aux;
	}

	std::cout << "MAYOR AREA :" << mayor_area << std::endl;

	delete[]vec_rect;
}