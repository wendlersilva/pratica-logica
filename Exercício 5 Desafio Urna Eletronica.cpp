#include <iostream>
#include <locale.h>

using namespace std;


int main(){
	
	setlocale(LC_ALL, "Portuguese");

    int candidato1, candidato2, candidato3, candidato4, eleitores, nulos, contador, voto;
    
    cout << "Digite o n�mero de eleitores da cidade de S�o Paulo: \n";
    cin >> eleitores;
    candidato1 = 0;
    candidato2 = 0;
    candidato3 = 0;
    candidato4 = 0;


    for ( contador = 1; contador <= eleitores; contador++ ){
    	
    	cout << "Escolha uma op��o: \n";
    	cout << "Vereador(a) Ana - 1 \n";
    	cout << "Vereador(a) Paulo - 2 \n";
    	cout << "Vereador(a) Jorge - 3 \n";
    	cout << "Vereador(a) Jos� - 4 \n";
    	cin >> voto;
    
    if(voto == 1){
    	candidato1++;
	}
	else if(voto == 2){
		candidato2++;
	}
	else if(voto == 3){
		candidato3++;
    }
	else if(voto == 4){
		candidato4++;
	}
	else {
		nulos++;
	}
    	
	}
	
	cout << "\n\nResultado das Elei��es\n";
	cout << "Ana: " << candidato1 << "Voto(s)\n";
	cout << "Paulo: " << candidato2 << "Voto(s)\n";
	cout << "Jorge: " << candidato3 << "Voto(s)\n";
	cout << "Jos�: " << candidato4 << "Voto(s)\n";
	cout << "Nulos: " << nulos << "Voto(s)\n";

	
    
	system("pause");
	return 0;
}
