// 2.3. Ingresar tres números, informar su suma y producto

#include <iostream>

int main()
{
	float numero_1 = 0;
	float numero_2 = 0;
	float numero_3 = 0;

	std::cout << "Ingrese el numero 1:" << std::endl;
	std::cin >> numero_1;
	std::cout << "Ingrese el numero 2:" << std::endl;
	std::cin >> numero_2;
	std::cout << "Ingrese el numero 3:" << std::endl;
	std::cin >> numero_3;
	std::cout << "La suma de los tres numeros es: " << numero_1 + numero_2 + numero_3 << std::endl;
	std::cout << "La multiplicacion de los tres numeros es: " << numero_1 * numero_2 * numero_3 << std::endl;
}