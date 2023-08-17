#include <iostream>
#include <locale.h>

using namespace std;


int main(){
	
	setlocale(LC_ALL, "Portuguese");

    int numero;
    
    cout << "Digite um número inteiro: \n";
    cin >> numero;
    
    if ( numero > 0 ){
    	
    	cout << "\nNúmero positivo\n";
    	
	}
	
	else if ( numero < 0 ){
		
		cout << "\nNúmero negativo\n";
		
	}
    
    else{
    	
    	cout << "\nNúmero 0\n";
    	
	}
    
    
    
    
   
	system("pause");
	return 0;
}
