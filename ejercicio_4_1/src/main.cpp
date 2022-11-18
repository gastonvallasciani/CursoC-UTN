// Ejercicio 4.1: Ingresar 10 números enteros e informar el promedio.

#include <iostream>

#define TOTAL_NUMEROS_ENTEROS 10

float ejercicio4_1(void);

float ejercicio4_1(void)
{
    int acumulado = 0, aux = 0;
    float promedio = 0;
    uint8_t i = 0;

    for (i = 0; i < TOTAL_NUMEROS_ENTEROS; i++)
    {
        std::cout << "Ingresar un numero entero: " << std::endl;
        std::cin >> aux;
        acumulado += aux;
    }
    promedio = acumulado / TOTAL_NUMEROS_ENTEROS;
    std::cout << "Promedio: " << promedio << std::endl;
    return promedio;
}

void main()
{
    ejercicio4_1();
}