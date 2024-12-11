#include "Trem.h"

Trem::Trem(string codigo, string origem, string destino, int paradas) {

}
Trem::Trem(string codigo, string origem, string destino) {

}

string Trem::getCodigo() { return this->codigo; }
void Trem::setCodigo(string codigo) { this->codigo = codigo; }
string Trem::getOrigem() { return this->origem; }
void Trem::setOrigem(string origem) { this->origem = origem; }
string Trem::getDestino() { return this->destino; }
void Trem::setDestino(string destino) { this->destino = destino; }
int Trem::getParadas() { return this->paradas; }
void Trem::setParadas(int paradas) { this->paradas = paradas; }

void Trem::setLocomotiva(string modelo, int potencia, int peso) { locomotiva = Locomotiva(modelo, potencia, peso); }
Locomotiva Trem::getLocomotiva() { return this->locomotiva; }

void Trem::addVagao(int numero, TIPO_VAGAO tipo, string conteudo, int capacidade, int peso, string unidade) {
	vagaos.push_back(Vagao(numero, tipo, conteudo, capacidade, peso, unidade));
}
void Trem::removeVagao(int numero) {
	if (numero > this->vagaos.size()) {
		cout << "h� mais vag�es do que se deseja remover" << endl;
		return;
	}
	for (int i = 1; i <= numero; i++)
	{
		this->vagaos.pop_back();
	}
}
vector<Vagao> Trem::getVagoes() { return this->vagaos; }

int Trem::retornaPesoTotal() {
	int pesoTotal = this->locomotiva.getPeso();
	for (int i = 0; i < this->vagaos.size(); i++) {
		pesoTotal += vagaos[i].getPeso();
	}
}
string Trem::toString() {
	// TO DO
}