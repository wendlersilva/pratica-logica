#include <iostream>
#include <locale.h>

using namespace std;


int main(){
	
	setlocale(LC_ALL, "Portuguese");

    int numero;
    
    cout << "Digite um n�mero inteiro entre 1 e 5: \n";
    cin >> numero;
    
    
    while ( numero > 5 || numero < 1 ){
    	
    cout << "Digite um n�mero entre 1 e 5: \n";
    cin >> numero;

	}
    
    
	system("pause");
	return 0;
}

