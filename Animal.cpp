#include "StdAfx.h"
#include "Animal.h"
#include <string>

Animal::Animal()
{
}
void Animal::Set_edad(int ed)
{edad=ed;
}
int Animal::Get_edad()
{return edad;
}
void Animal::Set_clase(string cla)
{clase=cla;
}
string Animal::Get_clase()
{return clase;
}
void Animal::Set_sexo(string s)
{sexo=s;
}
string Animal::Get_sexo()
{return sexo;
}
void Animal::mostrardatos()
{
}

