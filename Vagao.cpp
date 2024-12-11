/******************************************************
#####	Autor: Thiago da Silva Moraes
#####	matrícula: 232035137
#####	Faculdade de Tecnologia
#####	Universidade de Brasília
#####	Classe VagaoMinerio
******************************************************/

#include "vagao.h"

Vagao::Vagao(int numero, TIPO_VAGAO tipo, string conteudo, int capacidade, int peso, string unidade) {
	setNumero(numero);
	setTipo(tipo);
	setConteudo(conteudo);
	setCapacidade(capacidade);
	setPeso(peso);
	setUnidade(unidade);
}

int Vagao::getNumero() { return this->numero; }
void Vagao::setNumero(int numero) { this->numero = numero; }
TIPO_VAGAO Vagao::getTipo() { return this->tipo; }
void Vagao::setTipo(TIPO_VAGAO tipo) { this->tipo = tipo; }
string Vagao::getConteudo() { return this->conteudo; }
void Vagao::setConteudo(string conteudo) { this->conteudo = conteudo; }
int Vagao::getCapacidade() { return this->capacidade; }
void Vagao::setPeso(int peso) { this->peso = peso; }
int Vagao::getPeso() { return this->peso; }
void Vagao::setCapacidade(int capacidade) { this->capacidade = capacidade; }
string Vagao::getUnidade() { return this->unidade; }
void Vagao::setUnidade(string unidade) { this->unidade = unidade; }

string Vagao::toString() {
	// TO DO
}