#ifndef VAGAO_H
#define VAGAO_H 

#include <iostream>
#include "Locomotiva.h"
#include "Vagao.h"

using namespace std;

enum TIPO_VAGAO {
	FRIGORIFICO,
	MINERIO
};

class Vagao {
    private:
		int numero;
		TIPO_VAGAO tipo;
		string conteudo;
		int capacidade;
		string unidade;

    public:
		Vagao(int numero, TIPO_VAGAO tipo, string conteudo, int capacidade, string unidade);

		int getNumero() { return this->numero; }
		void setNumero(int numero) { this->numero = numero; }
		TIPO_VAGAO getTipo() { return this->tipo; }
		void setTipo(TIPO_VAGAO tipo) { this->tipo = tipo; }
		string getConteudo() { return this->conteudo; }
		void setConteudo(string conteudo) { this->conteudo = conteudo; }
		int getCapacidade() { return this->capacidade; }
		void setCapacidade(int capacidade) { this->capacidade = capacidade; }
		string getUnidade() { return this->unidade; }
		void setUnidade(string unidade) { this->unidade = unidade; }

		string toString();
};

#endif

