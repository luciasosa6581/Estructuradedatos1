#include "StdAfx.h"
#include "Empleado.h"
#include <string>


Empleado::Empleado(void)
{nombre="";
sueldodia=0;
edad=0;
}
void Empleado::Set_nombre(string nom)
{nombre=nom;
}
string Empleado::Get_nombre()
{return nombre;
}
void Empleado::Set_sueldodia(double sd)
{sueldodia=sd;
}
float Empleado::Get_sueldodia()
{return sueldodia;
}
void Empleado::Set_edad(int ed)
{edad=ed;
}
int Empleado::Get_edad()
{return edad;
}
float Empleado::CALCULAR(int dt)
{return sueldodia*dt;
}
