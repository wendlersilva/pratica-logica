#include <iostream>
#include <locale.h>

using namespace std;


int main(){
	
	setlocale(LC_ALL, "Portuguese");

    int numero1, numero2, numero3;
    
    cout << "Digite o primeiro n�mero: \n";
    cin >> numero1;
    
    cout << "Digite o segundo n�mero: \n";
    cin >> numero2;
    
    cout << "Digite o terceiro n�mero: \n";
    cin >> numero3;
    
    if ( numero1 > numero2 && numero2 > numero3 ){
    	
    	cout << numero1 << "\n" << numero2 << "\n" << numero3 << "\n";
	}
	
	else if ( numero1 > numero3 && numero3> numero2 ){
		
		cout << numero1 << "\n" << numero3 << "\n" << numero2 << "\n";
	}
	
	else if ( numero2 > numero1 && numero1 > numero3 ){
		
		cout << numero2 << "\n" << numero1 << "\n" << numero3 << "\n";
	}
	
	else if ( numero2 > numero3 && numero3 > numero1 ){
		
		cout << numero2 << "\n" << numero3 << "\n" << numero1 << "\n";
    }   
	
	else if ( numero3 > numero1 && numero1 > numero2 ){
		
		cout << numero3 << "\n" << numero1 << "\n" << numero2 << "\n";
	
    }
	
	else{
		
		cout << numero3 << "\n" << numero2 << "\n" << numero1 << "\n";
	}
   
	system("pause");
	return 0;
}
