#include <iostream>
#include <locale.h>

using namespace std;


int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
    int numero;
    string fruta;
    
    numero = 5;
    
    if ( numero >= 2 && numero <= 10 ){
    	
    	cout << "-------------\n";
    	cout << "N�mero: " << numero << "\n";
    	cout << "Est� no intervalo 2 a 10 \n";
    	
	}
	
	else {
		
		cout << "-------------\n";
		cout << "N�mero: " << numero << "\n";
    	cout << "N�mero n�o est� no intervalo de 2 a 10 \n\n";
	}
 

    if ( numero >= 2 || numero <= 10 ){
    	
    	cout << "------ || -- OU -------\n";
    	cout << "N�mero: " << numero << "\n";
    	cout << "Est� no intervalo 2 a 10 \n";
    	
	}
	
	else{
		
		cout << "------- || -- OU ------\n";
		cout << "N�mero: " << numero << "\n";
    	cout << "N�mero n�o est� no intervalo de 2 a 10 \n\n";
	}
	
	
	system("pause"); // impede o fechamento ap�s a execu��o do c�digo
	return 0;
	
}
