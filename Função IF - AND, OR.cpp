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
    	cout << "Número: " << numero << "\n";
    	cout << "Está no intervalo 2 a 10 \n";
    	
	}
	
	else {
		
		cout << "-------------\n";
		cout << "Número: " << numero << "\n";
    	cout << "Número não está no intervalo de 2 a 10 \n\n";
	}
 

    if ( numero >= 2 || numero <= 10 ){
    	
    	cout << "------ || -- OU -------\n";
    	cout << "Número: " << numero << "\n";
    	cout << "Está no intervalo 2 a 10 \n";
    	
	}
	
	else{
		
		cout << "------- || -- OU ------\n";
		cout << "Número: " << numero << "\n";
    	cout << "Número não está no intervalo de 2 a 10 \n\n";
	}
	
	
	system("pause"); // impede o fechamento após a execução do código
	return 0;
	
}
