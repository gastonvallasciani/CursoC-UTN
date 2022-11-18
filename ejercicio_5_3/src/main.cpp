// Ejercicio 5.3: Ingresar un vector de 10 números reales (con decimales) y luego mostrar los que 
// están en las posiciones impares

#include <iostream>

int main()
{
	float vec[10] = { 0 };
	int i = 0, index = 0;
	int producto = 1;

	vec[0] = 1;

	while (i < 10)
	{
		std::cout << "Ingresar un numero real" << std::endl;
		
		std::cin >> vec[i];
		if (i % 2 != 0)
		{
			std::cout << vec[i] << " Se encuentra en la posicion" << i << std::endl;
		}
		i++;
	}

	return(0);
}