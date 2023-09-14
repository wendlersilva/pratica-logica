#include <iostream> 
#include <locale.h>

using namespace std;


int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	enum Roupas{meia, camisa, jaqueta, pijama};
	
	Roupas roupaSelecionada;
			
			
	roupaSelecionada = camisa;
	
	cout << "--------- Exemplo 1 -------------\n\n";
	cout << roupaSelecionada << endl;
	
	
	enum Calcados{tenis=10,	sapato,	chinelo, sandalha};
	
	Calcados calcadoSelecionado;
	
	calcadoSelecionado = sandalha;
	
	cout << "\n\n\n--------- Exemplo 2 -------------\n\n";
	cout << calcadoSelecionado << endl;
	
	
	enum Alimentos{pacoteArroz=5, pacoteFeijao, pacoteAcucar=2, pacoteCafe=5, pacoteBolacha	};
	
	Alimentos alimentoSelecionado;
	
	alimentoSelecionado = pacoteBolacha;
	
	cout << "\n\n\n--------- Exemplo 3 -------------\n\n";
	cout << alimentoSelecionado << endl;
			

	system("pause");
	return 0;
}


