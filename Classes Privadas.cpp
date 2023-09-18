#include <iostream>
#include <locale.h> 

using namespace std;

#include "AlunoPrivado.h"

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	Aluno *dadosAluno = new Aluno(1);
	
	dadosAluno -> exibirDadosNaTela();
	
	dadosAluno -> nome = "Pedro Ramos";
	dadosAluno -> setidade(23);
	
	
	dadosAluno -> exibirDadosNaTela();
	
	dadosAluno -> setidade(45);
	
	cout << "\n\n-------- Imprimindo publicos e privados -----------\n\n";
	cout << dadosAluno -> nome << "\n";
	cout << dadosAluno -> getidade() << "\n";
		
	
	system("pause");
	return 0;
}


