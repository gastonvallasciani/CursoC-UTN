#pragma once
class MiArray
{
private:
	float* array;
	int tamaño;
public:
	MiArray(int tamaño);
	~MiArray();
	void Valor(float val, const unsigned int pos);
	float Valor(const unsigned int pos) const;
};

