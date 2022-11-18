#include "Rectangulo3.h"


Rectangulo3::Rectangulo3(int base_, int altura_)
{
	base = base_;
	altura = altura_;
}

void Rectangulo3::Set_base(int base_)
{
	base = base_;
}

void Rectangulo3::Set_altura(int altura_)
{
	altura = altura_;
}

int Rectangulo3::Get_base(void)
{
	return(base);
}

int Rectangulo3::Get_altura(void)
{
	return(altura);
}

int Rectangulo3::Area(void)
{
	return(this->base * this->altura);
}

void Rectangulo3::Redimensionar(const int base, const int altura)
{
	this->base = base;
	this->altura = altura;
}