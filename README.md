# TRABALHO_01:

## 01. Projeto **Trem**

> **Objetivo**: Implementação de uma estrutura de classes organizada e funcional, e Tipos Abstratos de Dados no modelo de classess.

### Especificações

- Uma classe chamada de **Trem** que tem sua declaração como descrita de "Trem.h".
- Uma instância da classe (objeto) "Trem" tem: 
		- string codigo;
		- string origem;
		- string destino;
		- int paradas;
		- Locomotiva locomotiva;
		- vector<Vagao> vagaos;
  E ...
    -	static const int numeroTrens = 0;

  Outras classes de dados estão em 
  - Locomotiva
  - Vagao (classe abstrata)
  - VagaoFrigorifico : public Vagao
  - VagaoMinerio : public Vagao

### Entrega

> A entrega prevê que as classes venha com um **Comentário** definindo a classe e o autor (matricula e nome do autor/aluno).
> 
> A entrega prevê as classes documentadas.
>
> A entrega prevê um código **main** que comprove a execução dos métodos das classes implementadas.
>
> A entrega prevê um **Diagrama de Classes**.
>
> **A entrega será avalisada segundo o cumprimento da tods _Especificações_ acima na data definida, com um código _main_ que demonstre a realização como solicitada**.
