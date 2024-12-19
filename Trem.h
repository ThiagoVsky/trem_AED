/******************************************************
#####	Autor: Thiago da Silva Moraes
#####	matr�cula: 232035137
#####	Faculdade de Tecnologia
#####	Universidade de Bras�lia
#####	Header Trem
******************************************************/

#ifndef TREM_H
#define TREM_H 

#include <iostream>
#include <vector>
#include <sstream>
#include <string>

#include "Locomotiva.h"
#include "Vagao.h"
#include "VagaoFrigorifico.h"
#include "VagaoMinerio.h"


using namespace std;

class Trem {
    private:
		string codigo;
		string origem;
		string destino;
		int paradas = 1;

		Locomotiva *locomotiva = nullptr;
		vector<Vagao*> vagaos;

    public:
    	
		Trem(string codigo, string origem, string destino, int paradas);
		Trem(string codigo, string origem, string destino);

		string getCodigo();
		void setCodigo(string codigo);
		string getOrigem();
		void setOrigem(string origem);
		string getDestino();
		void setDestino(string destino);
		int getParadas();
		void setParadas(int paradas);

		void setLocomotiva(string modelo, int potencia, int peso);
		Locomotiva* getLocomotiva();

		void addVagao(int numero, TIPO_VAGAO tipo, string conteudo, int capacidade, int peso, string unidade);
		void removeVagao(int numero);
		vector<Vagao*> getVagoes();
		
		int retornaPesoTotal();
		string toString();
};

#endif



