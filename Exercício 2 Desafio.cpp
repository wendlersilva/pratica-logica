#include <iostream>
#include <locale.h>

using namespace std;


int main(){
	
	setlocale(LC_ALL, "Portuguese");

    int par, numero, contador;
    
    for ( contador = 1; contador <= 10; contador++ ){
    	
    	cout << "Digite um n�mero: " << contador << "\n";
    	cin >> numero;
    	
    	
    	if ( numero % 2 == 0 ){
    		
    		par++;
    		
		}
  
	}
	
	cout << "\nQuantidade de n�meros pares: " << par;
	cout << "\nQuantidade de n�meros impares: " << 10 - par << "\n";

   
	system("pause");
	return 0;
}
