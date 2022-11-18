#include <iostream>

bool ejercicio3_2(void);

bool ejercicio3_2(void)
{
    float x = 0;

    std::cout << "Ingresar x: " << std::endl;
    std::cin >> x;

    if ((x > -2) && (x < 4))
    {
        std::cout << "numero dentro de rango " << std::endl;
        return 1;
    }
    else
    {
        std::cout << "numero fuera de rango " << std::endl;
        return 0;
    }
}

int main()
{
    ejercicio3_2();

	return 0;
}