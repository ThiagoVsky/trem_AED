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

		string toString();
};

#endif



