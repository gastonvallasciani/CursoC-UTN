// Ejercicio 3.3: (opcional) Ingresar un número e informar si es múltiplo de 7

#include <iostream>

bool ejercicio3_3(void);

bool ejercicio3_3(void)
{
    int x = 0;

    std::cout << "Ingresar x: " << std::endl;
    std::cin >> x;

    if ((x % 7) == 0)
    {
        std::cout << "El numero es multiplo de 7" << std::endl;
        return 1;
    }
    else
    {
        std::cout << "El numero NO es multiplo de 7" << std::endl;
        return 0;
    }
}

int main()
{
    ejercicio3_3();

    return 0;
}