#include "Rectangulo2.h"


Rectangulo2::Rectangulo2(int base_, int altura_)
{
	base = base_;
	altura = altura_;
}

void Rectangulo2::Set_base(int base_)
{
	base = base_;
}

void Rectangulo2::Set_altura(int altura_)
{
	altura = altura_;
}

int Rectangulo2::Get_base(void)
{
	return(base);
}

int Rectangulo2::Get_altura(void)
{
	return(altura);
}

int Rectangulo2::Area(void)
{
	return(this->base * this->altura);
}
