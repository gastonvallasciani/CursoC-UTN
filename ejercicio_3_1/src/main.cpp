// Ejercicio 3.1: Ingresar 2 números a y b; si a < b informar a*b, en caso contrario a/b.

#include <iostream>

float ejercicio3_1(void);

float ejercicio3_1(void)
{
    float a = 0, b = 0, resultado = 0;

    std::cout << "Ingresar a: " << std::endl;
    std::cin >> a;
    std::cout << "Ingresar b: " << std::endl;
    std::cin >> b;

    if (a < b)
    {
        resultado = a * b;
        std::cout << "Resultado: " << resultado << std::endl;
    }
    else
    {
        resultado = a / b;
        std::cout << "Resultado: " << resultado << std::endl;
    }

    return(resultado);
}

int main()
{
    ejercicio3_1();

    return 0;
}