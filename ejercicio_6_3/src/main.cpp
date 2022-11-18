// Ejercico 6.3: (opcional)Escribir un programa que realice las siguientes tareas :
// a) Permitir al usuario ingresar 2 números reales(es decir, con decimales)
// b) Llamar a la función menu() la cual debe recibir los dos operandos y mostrar un
// menú con 4 opciones: +-*/ .Luego debe retornar el resultado de la operación.
// c) El programa principal debe mostrar el resultado en la pantalla.

#include <iostream>

float menu(float a, float b);

float menu(float a, float b)
{
	int menu_index = 0;
	float resultado = 0;
	
	std::cout << "MENU" << std::endl;

	do 
	{
		std::cout << "Ingrese una operacion " << std::endl;
		std::cout << "1) +" << std::endl;
		std::cout << "2) - " << std::endl;
		std::cout << "3) * " << std::endl;
		std::cout << "4) / " << std::endl;
		std::cin >> menu_index;

		if ((menu_index < 5) && (menu_index > 0))
		{
			switch (menu_index)
			{
			case 1:
				resultado = a + b;
				break;
			case 2:
				resultado = a - b;
				break;
			case 3:
				resultado = a * b;
				break;
			case 4:
				resultado = a / b;
				break;
			}
		}

	} while (menu_index > 4);

	return resultado;
}

int main(void)
{
	float a = 0, b = 0;
	float operacion = 0;

	std::cout << "Ingrese a " << std::endl;
	std::cin >> a;
	std::cout << "Ingrese b " << std::endl;
	std::cin >> b;

	operacion = menu(a, b);

	std::cout << "El resultado de la operacion es: " << operacion << std::endl;
}