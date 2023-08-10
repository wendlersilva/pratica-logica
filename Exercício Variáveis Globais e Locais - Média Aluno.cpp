#include <iostream>
#include <locale.h>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "Portuguese");

	string nome = "Aluno: Wendler \n";
	cout <<  "Digite o nome do aluno: \n";
	cin >> nome;

    double nota1, nota2, nota3, nota4, media;
	nota1 = 8;
	nota2 = 7;
	nota3 = 10;
	nota4 = 9;
	
	media = (nota1 + nota2 + nota3 + nota4) /4;
	
	cout << "Média: " << media << "\n";
    

	
	system("pause");
	return 0;
}
