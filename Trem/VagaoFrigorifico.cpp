#include "VagaoFrigorifico.h"

VagaoFrigorifico::VagaoFrigorifico(int numero, TIPO_VAGAO tipo, string conteudo, int capacidade, string unidade, int temperatura) :
	Vagao(numero, tipo, conteudo, capacidade, unidade) {
	this->temperatura = temperatura;
}
int VagaoFrigorifico::getTemperatura() { return this->temperatura; }
void VagaoFrigorifico::setTemperatura(int temperatura) { this->temperatura = temperatura; }
string VagaoFrigorifico::toString() {
	stringstream ss;
	ss << Vagao::toString() << "{ " << to_string(this->getTemperatura()) << "} ";
	return ss.str();
}