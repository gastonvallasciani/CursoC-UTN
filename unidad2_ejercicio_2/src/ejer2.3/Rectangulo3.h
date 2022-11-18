#pragma once
class Rectangulo3
{
private:
	int base;
	int altura;
public:
	Rectangulo3(int base, int altura);
	void Set_base(int base_);
	void Set_altura(int altura_);
	int Get_base(void);
	int Get_altura(void);
	int Area(void);
	void Redimensionar(const int base, const int altura);
};