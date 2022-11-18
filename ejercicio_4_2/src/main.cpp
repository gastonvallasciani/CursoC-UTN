//Ejercicio 4.2: Ingresar números finalizando con un número negativo o cero, informar el producto.

#include <iostream>

float ejercicio4_2(void);

float ejercicio4_2(void)
{
    int acumulado = 1, number = 1;
    float promedio = 0;
    int i = 0;

    while (number > 0)
    {
        acumulado *= number;
        std::cout << "Ingresar un numero entero: " << std::endl;
        std::cout << "Si desea finalizar ingresar un numero negativo o cero: " << std::endl;
        std::cin >> number;
    }

    std::cout << "Resultado: " << acumulado << std::endl;
    return acumulado;
}

int main()
{
    ejercicio4_2();
}