#include <iostream>
#include <locale.h> 

using namespace std;

class Aluno{
	
	public:
		
		string nome = "Maria Eduarda";
		int idade = 29;
		string sexo = "Feminino";
		
		
		string estado;
		
		void verificaEstado(string estadoAluno);
		
};

void Aluno::verificaEstado(string estadoAluno){
	
	if( estadoAluno =="SP" ){
		
		this -> estado = "São Paulo";
		
	}else if( estadoAluno =="SC" ){
		
		this -> estado = "Santa Catarina";
	
    }else if( estadoAluno =="PR" ){
		
		this -> estado = "Paraná";
	
}

}

int main(){

	setlocale(LC_ALL, "Portuguese");
	
    Aluno *dadosAluno = new Aluno();
    
    cout << "Nome: " << dadosAluno -> nome << "\n";
    cout << "Idade: " << dadosAluno -> idade << "\n";
    cout << "Sexo: " << dadosAluno -> sexo << "\n";
    
    
    dadosAluno -> verificaEstado("SP");
    cout << "Estado: " << dadosAluno -> estado << "\n";



			
			
	system("pause");
	return 0;
}
