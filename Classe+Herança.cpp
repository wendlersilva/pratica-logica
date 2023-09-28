#include <iostream> 
#include <locale.h> 

using namespace std;

#include "Heranca.h"

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	AlunoEscolaFilho *dadosEscolaFilho = new AlunoEscolaFilho();
	
	dadosEscolaFilho -> imprimirNaTela();
	
	AlunoEscolaNeto *dadosNeto = new AlunoEscolaNeto();
	
	dadosNeto -> imprimirNaTela();
	
	dadosNeto -> nome="Alfredo Alves";
	dadosNeto -> idade=38;
	
	dadosNeto -> imprimirNaTela();
	
	system("pause");
	
	return 0;
}


