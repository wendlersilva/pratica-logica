#include <iostream>
#include <locale.h>

using namespace std;


int main(){
	
	setlocale(LC_ALL, "Portuguese");

    int numero;
    
    cout << "Digite um n�mero inteiro: \n";
    cin >> numero;
    
    if ( numero > 0 ){
    	
    	cout << "\nN�mero positivo\n";
    	
	}
	
	else if ( numero < 0 ){
		
		cout << "\nN�mero negativo\n";
		
	}
    
    else{
    	
    	cout << "\nN�mero 0\n";
    	
	}
    
    
    
    
   
	system("pause");
	return 0;
}
