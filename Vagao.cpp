/******************************************************
#####	Autor: Thiago da Silva Moraes
#####	matrícula: 232035137
#####	Faculdade de Tecnologia
#####	Universidade de Brasília
#####	Classe VagaoMinerio
******************************************************/

#include <random>
#include <ctime>

#include "vagao.h"

Vagao::Vagao(int numero, TIPO_VAGAO tipo, string conteudo, int capacidade, int peso, string unidade) : 
	numero(numero), tipo(tipo), conteudo(conteudo), capacidade(capacidade), peso(peso), unidade(unidade){
	if (getPeso() > getCapacidade()) {
		setPeso(getCapacidade());
		cerr << "Peso escolhido maior que capacidade do vagão, preenchendo até o limite." << endl;
	}

}

int Vagao::getNumero() { return this->numero; }
void Vagao::setNumero(int numero) { this->numero = numero; }
TIPO_VAGAO Vagao::getTipo() { return this->tipo; }
void Vagao::setTipo(TIPO_VAGAO tipo) { this->tipo = tipo; }
string Vagao::getConteudo() { return this->conteudo; }
void Vagao::setConteudo(string conteudo) { this->conteudo = conteudo; }
int Vagao::getCapacidade() { return this->capacidade; }
void Vagao::setCapacidade(int capacidade) { this->capacidade = capacidade; }
int Vagao::getPeso() { return this->peso; }
void Vagao::setPeso(int peso) { this->peso = peso; }
string Vagao::getUnidade() { return this->unidade; }
void Vagao::setUnidade(string unidade) { this->unidade = unidade; }

string Vagao::toString(TIPO_VAGAO tipo) {
	if (tipo == 1) return "frigorífico";
	else if (tipo == 2) return "minério";
	else return "tipo não identificado";
}

	string Vagao::toString() {
	stringstream ss;
	ss << "Número: " << to_string(getNumero())
		<< " | Tipo: " << toString(getTipo())
		<< " | Conteúdo: " << getConteudo()
		<< " | Capacidade: " << getCapacidade() << "kg"
		<< " | Peso: " << to_string(getPeso()) << "kg"
		<< " | Unidade: " << getUnidade();

	return ss.str();
}