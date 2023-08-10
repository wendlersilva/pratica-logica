#include <iostream>
#include <locale.h>

using namespace std;

double nota1VariavelGlobal, nota2VariavelGlobal;

int main(){
	
	setlocale(LC_ALL, "Portuguese");

    double nota3VariavelLocal, nota4VariavelLocal, media;
    
    nota1VariavelGlobal = 9;
    nota2VariavelGlobal = 5;
    nota3VariavelLocal = 5;
    nota4VariavelLocal = 8;
    
    media = (nota1VariavelGlobal + nota2VariavelGlobal +  nota3VariavelLocal +  nota4VariavelLocal) / 4;
    cout << "Média: " << media << "\n";
	
	system("pause");
	return 0;
}
