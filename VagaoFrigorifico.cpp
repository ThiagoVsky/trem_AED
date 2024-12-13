/******************************************************
#####	Autor: Thiago da Silva Moraes
#####	matrícula: 232035137
#####	Faculdade de Tecnologia
#####	Universidade de Brasília
#####	Classe VagaoMinerio
******************************************************/

#include "VagaoFrigorifico.h"

VagaoFrigorifico::VagaoFrigorifico(int numero, TIPO_VAGAO tipo, string conteudo, int capacidade, int peso, string unidade, int temperatura) :
	Vagao(numero, tipo, conteudo, capacidade, peso, unidade) {
	this->temperatura = temperatura;
}
int VagaoFrigorifico::getTemperatura() { return this->temperatura; }
void VagaoFrigorifico::setTemperatura(int temperatura) { this->temperatura = temperatura; }
string VagaoFrigorifico::toString() {
	stringstream ss;
	ss << Vagao::toString() << "{" << to_string(this->getTemperatura()) << "graus}" << endl;
	return ss.str();
}