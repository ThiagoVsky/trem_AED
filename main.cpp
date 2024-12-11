/******************************************************
#####	Autor: Thiago da Silva Moraes
#####	matrícula: 232035137
#####	Faculdade de Tecnologia
#####	Universidade de Brasília
#####	Classe Main
******************************************************/


#include <iostream>
#include "Trem.h"

using namespace std;

int main() {

	Trem trem = Trem("2134", "São Paulo", "Salvador", 8);

	trem.setLocomotiva("LocoTrem", 8000, 4000);

	system("pause");
	return 0;
}
