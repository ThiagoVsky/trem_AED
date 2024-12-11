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
		VagaoFrigorifico(int numero, TIPO_VAGAO tipo, string conteudo, int capacidade, string unidade, int temperatura);
		int getTemperatura();
		void setTemperatura(int temperatura);
		string toString();
};

#endif




