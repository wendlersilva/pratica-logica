#include <iostream>
#include <locale.h>

using namespace std;


int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	double valorEntrada;
	string nome, sexo;
	
	valorEntrada = 12;
	
	cout << "Digite o seu nome: \n";
	cin >> nome;
	
	
	cout << "Digite o seu sexo: \n";
	cin >> sexo;
	
	if ( sexo == "Masculino"){
		
		cout << "\n\n------- Comprovante de entrada ------- \n\n";
		cout << "Nome: " << nome << endl;
		cout << "Valor entrada: " << valorEntrada << endl << endl;
		cout << "------- Aproveite o show ------- " << endl << endl;
		
	}
	
	else if (sexo == "Feminino"){
		
		valorEntrada = valorEntrada / 2;
	
	    cout << "\n\n------- Comprovante de entrada ------- \n \n";
		cout << "Nome: " << nome << endl;
		cout << "Valor entrada: " << valorEntrada << endl << endl;
		cout << "------- Aproveite o show ------- " << endl << endl;
	
	}

	else{
		
		cout << "Voc� n�o digitou um sexo v�lido" << endl;
	}
	
	
	system("pause"); // impede o fechamento ap�s a execu��o do c�digo
	return 0;
	
}
