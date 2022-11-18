/* Ejercicio 4.3:4 (opcional)Ingresar números enteros, finalizando cuando la suma supere 50.
Informar la cantidad de datos ingresados y la cantidad de números que son
múltiplos de 3. */

#include <iostream>

int main()
{
	int suma = 0, aux = 0;
	int cant_datos_ingresados = 0;
	int cant_multiplos_de_3 = 0;

	while (suma < 50)
	{
		std::cout << "Ingrese un numero entero" << std::endl;
		std::cin >> aux;

		suma += aux;
		cant_datos_ingresados++;
		if ((aux % 3) == 0)
		{
			cant_multiplos_de_3++;
		}
	}
	std::cout << "Cantidad de datos ingresados: " << cant_datos_ingresados << std::endl;
	std::cout << "Cantidad de datos ingresados multiplos de 3 :" << cant_multiplos_de_3 << std::endl;
}