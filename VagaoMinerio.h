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
		string forma;

    public:
		VagaoMinerio(int numero, string conteudo, int capacidade, int peso, string unidade);

		string getForma();
		void setForma(string forma);

		string toString();

};


#endif
