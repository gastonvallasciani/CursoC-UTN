// Ejercicio 5.4:(opcional) Ingresar números en un vector hasta que el valor ingresado sea cero 
// (que no se debe almacenar).Luego mostrar los números ingresados en orden
// inverso.

#include <iostream>

int main()
{
	int vec[100] = { 0 };
	int i = 0, index = 0, j = 0;
	int aux = 0;

	vec[0] = 1;

	while (vec[index] > 0)
	{
		std::cout << "Ingresar un numero entero" << std::endl;
		std::cin >> aux;
		if (aux > 0)
		{
			vec[i] = aux;
		}
		i++;
		index = i - 1;
	}

	for (i = index - 1; i > -1; i--)
	{
		std::cout << vec[i] << std::endl;
	}

	return(0);
}