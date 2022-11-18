#include "Rectangulo4.h"


Rectangulo4::Rectangulo4(int base, int altura)
{
	this->base = base;
	this->altura = altura;
}

void Rectangulo4::Set_base(int base)
{
	this->base = base;
}

void Rectangulo4::Set_altura(int altura)
{
	this->altura = altura;
}

int Rectangulo4::Get_base(void)
{
	return(this->base);
}

int Rectangulo4::Get_altura(void)
{
	return(this->altura);
}

int Rectangulo4::Area(void)const
{
	return(this->base * this->altura);
}

void Rectangulo4::Redimensionar(const int base, const int altura)
{
	this->base = base;
	this->altura = altura;
}

int Rectangulo4::MayorArea(const Rectangulo4& ref)
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