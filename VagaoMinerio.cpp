/******************************************************
#####	Autor: Thiago da Silva Moraes
#####	matrícula: 232035137
#####	Faculdade de Tecnologia
#####	Universidade de Brasília
#####	Classe VagaoMinerio
******************************************************/

#include "VagaoMinerio.h"

// TO DO


VagaoMinerio::VagaoMinerio(int numero, TIPO_VAGAO tipo, string conteudo, int capacidade, int peso, string unidade, int forma) :
	Vagao(numero, tipo, conteudo, capacidade, peso, unidade) {
	this->forma = forma;
}
int VagaoMinerio::getForma() { return this->forma; }
void VagaoMinerio::setForma(int forma) { this->forma = forma; }
string VagaoMinerio::toString() {
	stringstream ss;
	ss << Vagao::toString() << "{ " << to_string(getForma()) << "} ";
	return ss.str();
}