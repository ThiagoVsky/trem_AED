/******************************************************
#####	Autor: Thiago da Silva Moraes
#####	matr�cula: 232035137
#####	Faculdade de Tecnologia
#####	Universidade de Bras�lia
#####	Classe Main
******************************************************/


#include <iostream>
#include "Trem.h"

using namespace std;

int main() {

	Trem trem = Trem("2134", "S�o Paulo", "Salvador", 8);

	trem.setLocomotiva("LocoTrem", 8000, 4000);

	system("pause");
	return 0;
}
