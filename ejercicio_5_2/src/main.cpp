// Ejercicio 5.2: Ingresar datos a un vector finalizando con un número negativo o cero, informar el producto.

#include <iostream>

int main()
{
	int vec[100] = { 0 };
	int i = 0, index = 0;
	int producto = 1;

	vec[0] = 1;

	while(vec[index] > 0)
	{
		std::cout << "Ingresar un numero entero" << std::endl;
		std::cout << "Si desea termianr ingrese un numero negativo o cero" << std::endl;
		std::cin >> vec[i];
		if (vec[i] > 0)
		{
			producto *= vec[i];
		}
		i++;
		index = i - 1;
	}

	std::cout << "Producto: " << producto << std::endl;

	return(0);
}