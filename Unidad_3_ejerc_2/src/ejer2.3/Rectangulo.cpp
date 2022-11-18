#include "Rectangulo.h"
#include <iostream>

Rectangulo::Rectangulo(int base, int altura)
{
	this->base = base;
	this->altura = altura;
}

Rectangulo::~Rectangulo()
{
	std::cout << "Ejecuto destructor" << std::endl;
}

void Rectangulo::Set_base(int base)
{
	this->base = base;
}

void Rectangulo::Set_altura(int altura)
{
	this->altura = altura;
}

int Rectangulo::Get_base(void)
{
	return(this->base);
}

int Rectangulo::Get_altura(void)
{
	return(this->altura);
}

int Rectangulo::Area(void)
{
	return(this->base * this->altura);
}

void Rectangulo::Redimensionar(const int base, const int altura)
{
	this->base = base;
	this->altura = altura;
}

int Rectangulo::MayorArea(Rectangulo& ref)
{
	if (this->Area() > ref.Area())
	{
		return this->Area();
	}
	else
	{
		ref.Area();
	}
}