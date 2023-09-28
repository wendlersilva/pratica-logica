#include <iostream> 
#include <locale.h> 

using namespace std;

#include "SobrecargaMetodos.h"

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	Aluno *dadosAluno = new Aluno();
	
	dadosAluno -> DadosAluno();
	
	dadosAluno -> DadosAluno("222.222.222-22");
	
	dadosAluno -> DadosAluno("222.222.222-22", "Berenice Alves", 39, "Feminino");
	
	system("pause");
	
	return 0;
}


