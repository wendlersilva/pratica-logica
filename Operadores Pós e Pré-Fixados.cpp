#include <iostream>
#include <locale.h>

using namespace std;


int main(){
	
	setlocale(LC_ALL, "Portuguese");

    int numero1;
    
    numero1 = 10;
    
    cout << "------ Valor Inicial ------\n";
    cout << "Número: " << numero1 << "\n";
    
    cout << "------ Valor Multiplicado ------\n";
	numero1*=2;
    cout << "Número: " << numero1 << "\n";
    
    cout << "------ Valor Dividido ------\n";
	numero1/=4;
    cout << "Número: " << numero1 << "\n";
    
    
	//Pós Fixado//
	numero1 = 100;

	cout << "\n ---- Pós Fixado ---- \n";
	cout << "Número = 100 \n";
	cout << "Número = " << numero1++ << "\n";
	cout << "Número = " << numero1 << "\n";
	
	
	//Pré Fixado//
	numero1 = 100;

	cout << "\n ---- Pré Fixado ---- \n";
	cout << "Número = 100 \n";
	cout << "Número = " << ++numero1 << "\n";
    
    
    
    
   
	system("pause");
	return 0;
}
