#ifndef TREM_H
#define TREM_H 

#include <iostream>
#include <vector>
#include "Locomotiva.h"
#include "Vagao.h"

using namespace std;

class Trem {
    private:
		string codigo;
		string origem;
		string destino;
		int paradas;

		Locomotiva *locomotiva;

		vector<Vagao> vagaos;

    public:
    	static const int numeroTrens = 0;
    	
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
		Locomotiva getLocomotiva();

		void addVagao(TIPO_VAGAO tipoVagao, string conteudo, int capacidade, string unidade);
		void removeVagao(int codigoVagao);
		vector<Vagao> getVagoes();
		
		int retornaPesoTotal();
		string toString();
};

#endif



