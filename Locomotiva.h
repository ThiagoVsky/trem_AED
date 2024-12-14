#ifndef LOCOMOTIVA_H
#define LOCOMOTIVA_H 

#include <iostream>

using namespace std;

class Locomotiva {
    private:
        string modelo;
        int potencia;
        int peso;

    public:
		Locomotiva(string modelo, int potencia, int peso);

		string getModelo();
		void setModelo(string modelo);
		int getPotencia();
		void setPotencia(int potencia);

		int getPeso(int potencia);
		void setPeso(string modelo);

		void imprime();
};

#endif



