#ifndef VAGAO_H
#define VAGAO_H 

/******************************************************
#####	Autor: Thiago da Silva Moraes
#####	matrícula: 232035137
#####	Faculdade de Tecnologia
#####	Universidade de Brasília
#####	Header Vagao
******************************************************/

#include <iostream>
#include "Locomotiva.h"
#include <string>
#include <sstream>


using namespace std;

enum TIPO_VAGAO {
	FRIGORIFICO =1,
	MINERIO
};

class Vagao {
    private:
		int numero;
		TIPO_VAGAO tipo;
		string conteudo;
		int capacidade;
		string unidade;
		int peso;

    public:
		Vagao(int numero, TIPO_VAGAO tipo, string conteudo, int capacidade, int peso, string unidade);

		int getNumero();
		void setNumero(int numero);
		TIPO_VAGAO getTipo();
		void setTipo(TIPO_VAGAO tipo);
		string getConteudo();
		void setConteudo(string conteudo);
		int getCapacidade();
		void setPeso(int peso);
		int getPeso();
		void setCapacidade(int capacidade);
		string getUnidade();
		void setUnidade(string unidade);

		string toString(TIPO_VAGAO tipo);
		virtual string toString() = 0;
};

#endif



