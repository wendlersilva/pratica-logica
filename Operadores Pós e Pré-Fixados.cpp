#include <iostream>
#include <locale.h>

using namespace std;


int main(){
	
	setlocale(LC_ALL, "Portuguese");

    int numero1;
    
    numero1 = 10;
    
    cout << "------ Valor Inicial ------\n";
    cout << "N�mero: " << numero1 << "\n";
    
    cout << "------ Valor Multiplicado ------\n";
	numero1*=2;
    cout << "N�mero: " << numero1 << "\n";
    
    cout << "------ Valor Dividido ------\n";
	numero1/=4;
    cout << "N�mero: " << numero1 << "\n";
    
    
	//P�s Fixado//
	numero1 = 100;

	cout << "\n ---- P�s Fixado ---- \n";
	cout << "N�mero = 100 \n";
	cout << "N�mero = " << numero1++ << "\n";
	cout << "N�mero = " << numero1 << "\n";
	
	
	//Pr� Fixado//
	numero1 = 100;

	cout << "\n ---- Pr� Fixado ---- \n";
	cout << "N�mero = 100 \n";
	cout << "N�mero = " << ++numero1 << "\n";
    
    
    
    
   
	system("pause");
	return 0;
}
