#include "StdAfx.h"
#include "Cilindro.h"
#include <string>


Cilindro::Cilindro()
{
}
void Cilindro::Set_radio(double r)
{radio=r;
}

double Cilindro::Get_radio()
{return radio;
}

void Cilindro::Set_altura(double h)
{altura=h;
}
double Cilindro::Get_altura()
{return altura;
}
double Cilindro::calcular()
{volumen=(3.14)*radio*radio*altura;
return volumen;
}


