#include <iostream>
#include <locale.h>

using namespace std;


int main(){
	
	setlocale(LC_ALL, "Portuguese");

    int numero, contador, resultado;
    
    cout << "Informe o n�mero da tabuada que deseja ver: \n";
    cin >> numero;
    
    if ( numero >= 1 && numero <= 10 ){
    	
        for ( contador = 1; contador<=10; contador++ ){
        	
        	resultado = ( numero * contador );
        	cout << "\n" << numero << " x " << contador << " = " << resultado;
        	
        	
		}
       	
	}else{
		
		cout << "N�mero inv�lido \n";
		
	}
	
   
	system("pause");
	return 0;
}
