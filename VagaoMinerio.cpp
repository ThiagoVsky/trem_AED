/******************************************************
#####	Autor: Thiago da Silva Moraes
#####	matrícula: 232035137
#####	Faculdade de Tecnologia
#####	Universidade de Brasília
#####	Classe VagaoMinerio
******************************************************/

#include "VagaoMinerio.h"


VagaoMinerio::VagaoMinerio(int numero, string conteudo, int capacidade, int peso, string unidade, string forma) :
	Vagao(numero, MINERIO, conteudo, capacidade, peso, unidade), forma(forma) {
}

string VagaoMinerio::getForma() { return this->forma; }
void VagaoMinerio::setForma(string forma) { this->forma = forma; }

string VagaoMinerio::toString() {
	stringstream ss;
	ss << Vagao::toString() << " | Forma: " << getForma();

	return ss.str();
}