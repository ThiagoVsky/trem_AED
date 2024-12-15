/******************************************************
#####	Autor: Thiago da Silva Moraes
#####	matrícula: 232035137
#####	Faculdade de Tecnologia
#####	Universidade de Brasília
#####	Classe Main
******************************************************/


#include <iostream>
#include "Trem.h"
#include "VagaoFrigorifico.h"

using namespace std;

int main() {
	setlocale(LC_ALL, "");

	VagaoFrigorifico v1(1, "carne", 256, 255, "l219");

	Vagao* v = &v1;
	
	cout << "sem ponteiro:\n" << v1.toString();
	cout << "com ponteiro:\n" << v->toString();

	return 0;
}
