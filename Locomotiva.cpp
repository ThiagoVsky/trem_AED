/******************************************************
#####	Autor: Thiago da Silva Moraes
#####	matrícula: 232035137
#####	Faculdade de Tecnologia
#####	Universidade de Brasília
#####	Classe VagaoMinerio
******************************************************/

#include "Locomotiva.h"

Locomotiva::Locomotiva(string modelo, int potencia) {

}
Locomotiva::Locomotiva(string modelo, int potencia, int peso) {

}

string Locomotiva::getModelo() { return this->modelo; }
void Locomotiva::setModelo(string modelo) { this->modelo = modelo; }
int Locomotiva::getPotencia() { return this->potencia; }
void Locomotiva::setPotencia(int potencia) { this->potencia = potencia; }
int Locomotiva::getPeso() { return this->peso; }
void Locomotiva::setPeso(int peso) { this->peso = peso; }

void Locomotiva::imprime(){}