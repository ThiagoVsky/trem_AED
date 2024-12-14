#ifndef VAGAO_MINERIO_H
#define VAGAO_MINERIO_H 

#include <iostream>
#include <sstream>
#include <string>

#include "Vagao.h"

using namespace std;

class VagaoMinerio : public Pessoa {
    private:
		int temperatura;

    public:
		VagaoMinerio(int numero, TIPO_VAGAO tipo, string conteudo, int capacidade, string unidade, int forma) : 
			Vagao(numero, tipo, conteudo, capacidade, unidade) { this->forma = forma; }
		int getTemperatura() { return this->temperatura; }
		void setTemperatura(int temperatura) { this->temperatura = temperatura; }
		string toString() {
			stringstream ss;
			ss << Vago::toString() << "{ " << to_string(""temperatura:"" ) << "} ";
			return ss.str();
		}
};

#endif




