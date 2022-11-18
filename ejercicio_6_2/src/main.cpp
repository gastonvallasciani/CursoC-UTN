// Ejercicio 6.2:
// a) Escribir una función que reciba como argumentos un vector de enteros y un 
// entero que indica la cantidad de elementos, y devuelva la suma.
//          int suma(int vec[], int n)
// b) Para probarla, escribir la función prueba que declara un vector de 5 elementos,
// los completa con valores, invoca a la función e imprime en pantalla el resultado
// recibido

#include <iostream>

int suma(int vec[], int n);
void prueba(void);


int suma(int vec[], int n)
{
	int i = 0, suma = 0;

	for (i = 0; i < n; i++)
	{
		suma += vec[i];
	}

	return suma;
}

void prueba(void)
{
	int vec_prueba[5] = {1 ,2 ,3 ,4 ,5};
	int suma_var = 0;
	
	suma_var = suma(vec_prueba, 5);

	std::cout << suma_var << std::endl;
}

int main()
{
	prueba();

	return(0);
}