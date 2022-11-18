#pragma once
class Rectangulo4
{
private:
	int base;
	int altura;
public:
	Rectangulo4(int base, int altura);
	void Set_base(int base_);
	void Set_altura(int altura_);
	int Get_base(void);
	int Get_altura(void);
	int Area(void)const;
	void Redimensionar(const int base, const int altura);
	int MayorArea(const Rectangulo4& ref);
};