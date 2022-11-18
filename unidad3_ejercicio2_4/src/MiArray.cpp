#include <iostream>
#include "MiArray.h"

MiArray::MiArray(int tama�o)
{
	std::cout << "Aloco memoria" << std::endl;
	this->array = new float[tama�o];
	this->tama�o = tama�o;
}

MiArray::~MiArray()
{
	std::cout << "Libero memoria" << std::endl;
	delete[]this->array;
}

void MiArray::Valor(float val, const unsigned int pos)
{
	if ((pos >= 0) and (pos < this->tama�o))
	{
		this->array[pos] = val;
	}
	else
	{
		std::cout << "ERROR: ACCESO INVALIDO" << std::endl;
	}
}

float MiArray::Valor(const unsigned int pos) const
{
	if ((pos >= 0) and (pos < this->tama�o))
	{
		return(this->array[pos]);
	}
	else
	{
		return(-1);
	}
}