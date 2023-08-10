#include <iostream>
#include <locale.h>

using namespace std;

double nota1VG, nota2VG, nota3VG;


int main(){
	
	setlocale(LC_ALL, "Portuguese");

	double variavelLocalNota4, media;
    string nomeAluno;
    
    cout << "Digite o nome do aluno(a): \n";
    getline (cin, nomeAluno);
    
    cout << "Digite a nota 1: \n";
    cin >>  nota1VG;
    
    cout << "Digite a nota 2: \n";
    cin >>  nota2VG;
    
    cout << "Digite a nota 3: \n";
    cin >>  nota3VG;
    
    cout << "Digite a nota 4: \n";
    cin >>  variavelLocalNota4;
    
    media = (nota1VG + nota2VG + nota3VG + variavelLocalNota4) /4;
    
    cout << "---------------\n";
    cout << "Aluno(a): " << nomeAluno << "\n";
    cout << "Média: " << media << "\n";
    
    
   
	system("pause");
	return 0;
}
