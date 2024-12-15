/******************************************************
#####	Autor: Thiago da Silva Moraes
#####	matrícula: 232035137
#####	Faculdade de Tecnologia
#####	Universidade de Brasília
#####	Classe VagaoMinerio
******************************************************/

#include "VagaoFrigorifico.h"

VagaoFrigorifico::VagaoFrigorifico(int numero, string conteudo, int capacidade, int peso, string unidade) :
	Vagao(numero, FRIGORIFICO, conteudo, capacidade, peso, unidade) {
	temperatura = 1;
}
int VagaoFrigorifico::getTemperatura() { return this->temperatura; }
void VagaoFrigorifico::setTemperatura(int temperatura) { this->temperatura = temperatura; }
string VagaoFrigorifico::toString() {
	stringstream ss;
	ss << Vagao::toString() << " | Temperatura: " << getTemperatura();
	return ss.str();
}