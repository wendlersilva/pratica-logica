#include <iostream>
#include <locale.h>

using namespace std;


int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int numero1, numero2;
	string fruta;
	
	numero1 = 20;

    if ( numero1 > 50 ){
    	
    	cout << "---------- Resultado Número 1 ---------- \n";
    	cout << "O número 1 é maior que 50 \n";
	} 
	
	else {
		
		cout << "\n---------- Resultado Número 1 ---------- \n";
		cout << "O número 1 não é maior do que 50 \n";
	}
	
	
	numero2 = 10;
	
	 if ( numero1 > numero2 ){
    	
    	cout << "\n\n---------- Resultado IF Número 1 e Número 2 ---------- \n";
    	cout << "Número 1: " << numero1 << "\n";
    	cout << "Número 2: " << numero2 << "\n";
    	cout << "O número 1 é maior do que o número 2 \n";
	} 
	
  
    else {
		
		cout << "\n\n---------- Resultado IF Número 1 e Número 2 ---------- \n";
		cout << "Número 1: " << numero1 << "\n";
    	cout << "Número 2: " << numero2 << "\n";
		cout << "O número 1 não é maior do que o número 2 \n\n";
	}
	
	
	
	fruta = "Maçã";
	
	if ( fruta == "Maça" ){
	 
	    cout << "\n\n---------- Resultado IF Fruta ---------- \n\n";
		cout << "Fruta: " << fruta << "\n";
		cout << "A fruta é maçã \n";	
		
	}
	
	else {
		
		cout << "\n\n---------- Resultado IF Fruta ---------- \n\n";
		cout << "Fruta: " << fruta << "\n";
		cout << "A fruta não é maçã \n";
	}
	
	
	system("pause"); // impede o fechamento após a execução do código
	return 0;
	
}
