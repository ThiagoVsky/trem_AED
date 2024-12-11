#ifndef VAGAO_MINERIO_H
#define VAGAO_MINERIO_H 

#include <iostream>
#include <sstream>
#include <string>

#include "Vagao.h"

using namespace std;

class VagaoMinerio : public Vagao {
    private:
		int forma;

    public:
		VagaoMinerio(int numero, TIPO_VAGAO tipo, string conteudo, int capacidade, string unidade, int forma) : 
			Vagao(numero, tipo, conteudo, capacidade, unidade) { this->forma = forma; }
		int getForma() { return this->forma; }
		void setForma(int temperatura) { this->forma = temperatura; }
		string toString() {
			stringstream ss;
			ss << Vagao::toString() << "{ " << to_string(getForma()) << "} ";
			return ss.str();
		}
};

#endif




