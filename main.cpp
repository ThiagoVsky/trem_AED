/******************************************************
#####	Autor: Thiago da Silva Moraes
#####	matr�cula: 232035137
#####	Faculdade de Tecnologia
#####	Universidade de Bras�lia
#####	Classe Main
******************************************************/


#include <iostream>
#include "Trem.h"
#include "VagaoFrigorifico.h"

using namespace std;

int main() {
	setlocale(LC_ALL, "");

	
	Trem trem1("LD250", "Brasilia", "SJC", 3);
	Trem trem1("LD280", "Bel�m", "Palmas", 4);
	Trem trem1("RS232", "Vitoria", "Rio de Janeiro", 8);


	return 0;
}
