#include <iostream>
#include <locale.h>

using namespace std;


int main(){
	
	setlocale(LC_ALL, "Portuguese");

    
    int numero, contador, impar;
    
    cout << "Digite um número inteiro: \n";
    cin >> numero;
    
    contador = 0;
    impar = 1;
    
    while ( contador <= numero ){
    	
    	cout << "\n" << impar;
    	impar = impar + 2;
    	contador++;
    	
	}
    
    
    
    
    
	system("pause");
	return 0;
}
