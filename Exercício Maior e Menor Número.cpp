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
    
    
    //Fun��o para o maior n�mero
    if ( numero1 > numero2 && numero1 > numero3 ){
    	
    	cout << "\nO maior n�mero � o " << numero1 << "\n";
    	
	} 
	
	else if( numero2 > numero1 && numero2 > numero3 ) {
		
		cout << "\nO maior n�mero � o " << numero2  <<"\n";

	}
    
    else{
    	
    	cout << "\nO maior n�mero � o " << numero3 << "\n";
	}
	
	
	//Fun��o para o menor n�mero
	if ( numero1 < numero2 && numero1 < numero3 ){
    	
    	cout << "\nO menor n�mero � o " << numero1 << "\n";
    	
	} 
	
	else if( numero2 < numero1 && numero2 < numero3 ) {
		
		cout << "\nO menor n�mero � o " << numero2  <<"\n";

	}
    
    else{
    	
    	cout << "\nO menor n�mero � o " << numero3 << "\n";
	}
   
	system("pause");
	return 0;
}
