#include <iostream> 
#include <locale.h> 

using namespace std;

void funcaoNome(string nomeUsuario="Wendler");
void funcaoIdade(int idadeUsuario=27);

int main(){
	
	
	setlocale(LC_ALL, "Portuguese");
	
	funcaoNome();
	funcaoIdade();
			
			
	system("pause");
	return 0;
}

void funcaoNome(string nomeUsuario){
	
	cout << "Nome: " << nomeUsuario << "\n";
	
}

void funcaoIdade(int idadeUsuario){
	
	cout << "Idade: " << idadeUsuario << "\n";
	
}

