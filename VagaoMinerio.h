/******************************************************
#####	Autor: Thiago da Silva Moraes
#####	matrícula: 232035137
#####	Faculdade de Tecnologia
#####	Universidade de Brasília
#####	Header VagaoMinerio
******************************************************/

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
		VagaoMinerio(int numero, TIPO_VAGAO tipo, string conteudo, int capacidade, int peso, string unidade, int forma);

		int getForma();
		void setForma(int forma);

		string toString();

};


#endif
