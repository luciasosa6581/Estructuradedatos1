#pragma once
#include <iostream>
#include <string>

using namespace std;

class Animal
{private:
        int edad;
		string clase;
		string sexo;
public:
	Animal();
	void Set_edad(int ed);
	int Get_edad();
	void Set_clase(string cla);
	string Get_clase();
	void Set_sexo(string s);
	string Get_sexo();
	void mostrardatos();
	
};

