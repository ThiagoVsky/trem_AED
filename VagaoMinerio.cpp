/******************************************************
#####	Autor: Thiago da Silva Moraes
#####	matr�cula: 232035137
#####	Faculdade de Tecnologia
#####	Universidade de Bras�lia
#####	Classe VagaoMinerio
******************************************************/

#include "VagaoMinerio.h"


VagaoMinerio::VagaoMinerio(int numero, string conteudo, int capacidade, int peso, string unidade) : forma("padr�o"),
	Vagao(numero, MINERIO, conteudo, capacidade, peso, unidade) {
}

string VagaoMinerio::getForma() { return this->forma; }
void VagaoMinerio::setForma(string forma) { this->forma = forma; }

string VagaoMinerio::toString() {
	stringstream ss;
	ss << Vagao::toString() << " | Forma: " << getForma();

	return ss.str();
}