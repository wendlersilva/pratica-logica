#include <iostream>
#include <locale.h>

using namespace std;


int main(){
	
	setlocale(LC_ALL, "Portuguese");

    int contador;
    
    contador = 1;
    
    while ( contador < 11 ){
    	
    	cout << "Número: " << contador << "\n";
    	
    	contador++;
	}
	
	//----------------------------------------
   
    int contador2;
    
    contador2 = 10;
    
    cout << "\n\nExemplo 2\n\n";
    
    while ( contador2 > 0 ){
    
	cout << "Número: " << contador2 << "\n";	
	
	contador2--;
    	
	}
    
    //-----------------------------------------
    
    
    int qtdVezes;
    
    double nota, media, soma;
    
    soma = 0;
    qtdVezes = 1;
    
    while ( qtdVezes <= 4 ){
    
	cout << "Digite a nota: " << qtdVezes << "\n";	
	cin >> nota;
    
    soma+=nota;
    qtdVezes++;
    
}

    cout << "\n\n";
    media = soma / 4;
    
    cout << "A média é: " << media << "\n";

	system("pause");
	return 0;
}

