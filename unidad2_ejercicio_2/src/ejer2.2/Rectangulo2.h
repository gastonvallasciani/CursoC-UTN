#pragma once
class Rectangulo2
{
private:
	int base;
	int altura;
public:
	Rectangulo2(int base, int altura);
	void Set_base(int base_);
	void Set_altura(int altura_);
	int Get_base(void);
	int Get_altura(void);
	int Area(void);
};

