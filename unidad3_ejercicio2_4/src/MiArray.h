#pragma once
class MiArray
{
private:
	float* array;
	int tama�o;
public:
	MiArray(int tama�o);
	~MiArray();
	void Valor(float val, const unsigned int pos);
	float Valor(const unsigned int pos) const;
};

