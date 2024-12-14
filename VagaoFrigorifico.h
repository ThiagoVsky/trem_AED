#ifndef VAGAO_FRIGORIFICO_H
#define VAGAO_FRIGORIFICO_H 

#include <iostream>
#include <sstream>
#include <string>

#include "Vagao.h"

using namespace std;

class VagaoFrigorifico : public Vagao {
    private:
		int temperatura;

    public:
		VagaoFrigorifico(int numero, TIPO_VAGAO tipo, string conteudo, int capacidade, string unidade, int temperatura) : 
			Vagao(numero, tipo, conteudo, capacidade, unidade) { this->temperatura = temperatura; }
		int getTemperatura() { return this->temperatura; }
		void setTemperatura(int temperatura) { this->temperatura = temperatura; }
		string toString() {
			stringstream ss;
			ss << Vagao::toString() << "{ " << to_string(this->getTemperatura()) << "} ";
			return ss.str();
		}
};

#endif




