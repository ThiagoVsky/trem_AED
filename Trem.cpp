/******************************************************
#####	Autor: Thiago da Silva Moraes
#####	matrícula: 232035137
#####	Faculdade de Tecnologia
#####	Universidade de Brasília
#####	Classe VagaoMinerio
******************************************************/

#include "Trem.h"

Trem::Trem(string codigo, string origem, string destino, int paradas) :
Trem(codigo, origem, destino)
{
	setParadas(paradas);
}
Trem::Trem(string codigo, string origem, string destino) :
	codigo(codigo),
	origem(origem),
	destino(destino)
{

}

string Trem::getCodigo() { return this->codigo; }
void Trem::setCodigo(string codigo) { this->codigo = codigo; }
string Trem::getOrigem() { return this->origem; }
void Trem::setOrigem(string origem) { this->origem = origem; }
string Trem::getDestino() { return this->destino; }
void Trem::setDestino(string destino) { this->destino = destino; }
int Trem::getParadas() { return this->paradas; }
void Trem::setParadas(int paradas) { this->paradas = paradas; }

void Trem::setLocomotiva(string modelo, int potencia, int peso) { locomotiva = new Locomotiva(modelo, potencia, peso); }
Locomotiva* Trem::getLocomotiva() { return this->locomotiva; }

void Trem::addVagao(int numero, TIPO_VAGAO tipo, string conteudo, int capacidade, int peso, string unidade) {
	for (int i = numero; i > 0; i--) {
		if (tipo == 1) {
			vagaos.push_back(new VagaoFrigorifico(vagaos.size() + 1, conteudo, capacidade, peso, unidade));
		}
		else {
			vagaos.push_back(new VagaoMinerio(vagaos.size() + 1, conteudo, capacidade, peso, unidade));
		}
	}
}
void Trem::removeVagao(int numero) {
	if (numero > this->vagaos.size()) {
		cout << "há mais vagões do que se deseja remover" << endl;
		return;
	}
	for (int i = 1; i <= numero; i++)
	{
		this->vagaos.pop_back();
	}
}
vector<Vagao*> Trem::getVagoes() { return this->vagaos; }

int Trem::retornaPesoTotal() {
	int pesoTotal = locomotiva->getPeso();
	for (int i = 0; i < this->vagaos.size(); i++) {
		pesoTotal += vagaos[i]->getPeso();
	}
	return pesoTotal;
}
string Trem::toString() {
	stringstream ss;

	ss << "Dados do trem:" << endl << locomotiva->toString() << endl;

	for (int i = 0; i < vagaos.size(); i++)
	{
		ss << vagaos[i]->toString() << endl;
	}

	return ss.str();
}