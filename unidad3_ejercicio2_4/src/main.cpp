#include <iostream>
#include "MiArray.h"

int main()
{
	MiArray array_dinamico(4);

	array_dinamico.Valor(2.2, 0);
	array_dinamico.Valor(1.0, 1);
	array_dinamico.Valor(1.0, 2);
	array_dinamico.Valor(1.0, 3);

	std::cout << array_dinamico.Valor(0) << std::endl;
	std::cout << array_dinamico.Valor(1) << std::endl;
	std::cout << array_dinamico.Valor(2) << std::endl;
	std::cout << array_dinamico.Valor(3) << std::endl;
	std::cout << array_dinamico.Valor(5) << std::endl;

}