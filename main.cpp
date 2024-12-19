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
	
	Trem trem("LD280", "Belém", "Palmas", 4);
	
	trem.setLocomotiva("MN950", 4800, 8100);
	trem.addVagao(40, FRIGORIFICO, "Carne", 2400, 2100, "L856FRIG0");
	trem.addVagao(35, FRIGORIFICO, "Frango", 2400, 1195, "L866FRIG0");
	trem.addVagao(35, MINERIO, "Cobre", 12500, 12495, "F777MIN0");
	trem.addVagao(20, MINERIO, "Ferro", 12500, 11500, "G548MIN0");
	trem.addVagao(30, MINERIO, "Xisto", 12500, 12500, "A320MIN0");
	trem.addVagao(90, MINERIO, "VAzIo", 12500, 5, "C0c41n4-0");
	
	cout << trem.getVagoes().size();

	cout << trem.toString();

	system("pause");

	return 0;
}
