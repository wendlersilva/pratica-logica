#include <iostream>
#include <locale.h>

using namespace std;


int main(){
	
	setlocale(LC_ALL, "Portuguese");

    int numero1, numero2, numero3;
    
    cout << "Digite o primeiro número: \n";
    cin >> numero1;
    
    cout << "Digite o segundo número: \n";
    cin >> numero2;
    
    cout << "Digite o terceiro número: \n";
    cin >> numero3;
    
    
    //Função para o maior número
    if ( numero1 > numero2 && numero1 > numero3 ){
    	
    	cout << "\nO maior número é o " << numero1 << "\n";
    	
	} 
	
	else if( numero2 > numero1 && numero2 > numero3 ) {
		
		cout << "\nO maior número é o " << numero2  <<"\n";

	}
    
    else{
    	
    	cout << "\nO maior número é o " << numero3 << "\n";
	}
	
	
	//Função para o menor número
	if ( numero1 < numero2 && numero1 < numero3 ){
    	
    	cout << "\nO menor número é o " << numero1 << "\n";
    	
	} 
	
	else if( numero2 < numero1 && numero2 < numero3 ) {
		
		cout << "\nO menor número é o " << numero2  <<"\n";

	}
    
    else{
    	
    	cout << "\nO menor número é o " << numero3 << "\n";
	}
   
	system("pause");
	return 0;
}
