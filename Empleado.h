#pragma once
#include <iostream>
#include <string>

using namespace std;
class Empleado
{
private:
	string nombre;
	double sueldodia;
	int edad;

public:
	Empleado();
	void Set_nombre(string nom);
	string Get_nombre();
	void Set_sueldodia(double sd);
	float Get_sueldodia();
	void Set_edad(int ed);
	int Get_edad();
	float CALCULAR(int dt);

};

