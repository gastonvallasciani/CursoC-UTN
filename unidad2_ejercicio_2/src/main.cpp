#include <iostream>
//#include "ejer2.1/Rectangulo.h"
//#include "ejer2.2/Rectangulo2.h"
//#include "ejer2.3/Rectangulo3.h"
#include "ejer2.4/Rectangulo4.h"

int main()
{
	/* Ejer2.1
	Rectangulo rectangulo;

	rectangulo.base = 2;
	rectangulo.altura = 3;

	std::cout << rectangulo.Area() << std::endl;
	*/

	/* Ejer2.2
	Rectangulo2 rectangulo(2, 3);

	std::cout << rectangulo.Area() << std::endl;
	*/
	/* Ejer2.3
	Rectangulo3 rectangulo(2, 3);
	std::cout << rectangulo.Area() << std::endl;
	rectangulo.Redimensionar(4, 5);
	std::cout << rectangulo.Area() << std::endl;
	*/

	Rectangulo4 rectangulo(2, 3);
	Rectangulo4 rectangulo_aux(3, 4);
	std::cout << rectangulo.Area() << std::endl;
	std::cout << rectangulo_aux.Area() << std::endl;
	
	std::cout << rectangulo.MayorArea(rectangulo_aux) << std::endl;
	

	
}