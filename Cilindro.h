#pragma once

class Cilindro
{
private:
	double radio;
	double altura;
	double volumen;
public:
	Cilindro();
	void Set_radio(double r);
	double Get_radio();
	void Set_altura(double h);
	double Get_altura();
	double calcular();

};

