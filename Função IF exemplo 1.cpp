#include <iostream>
#include <locale.h>

using namespace std;


int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int numero1, numero2;
	string fruta;
	
	numero1 = 20;

    if ( numero1 > 50 ){
    	
    	cout << "---------- Resultado N�mero 1 ---------- \n";
    	cout << "O n�mero 1 � maior que 50 \n";
	} 
	
	else {
		
		cout << "\n---------- Resultado N�mero 1 ---------- \n";
		cout << "O n�mero 1 n�o � maior do que 50 \n";
	}
	
	
	numero2 = 10;
	
	 if ( numero1 > numero2 ){
    	
    	cout << "\n\n---------- Resultado IF N�mero 1 e N�mero 2 ---------- \n";
    	cout << "N�mero 1: " << numero1 << "\n";
    	cout << "N�mero 2: " << numero2 << "\n";
    	cout << "O n�mero 1 � maior do que o n�mero 2 \n";
	} 
	
  
    else {
		
		cout << "\n\n---------- Resultado IF N�mero 1 e N�mero 2 ---------- \n";
		cout << "N�mero 1: " << numero1 << "\n";
    	cout << "N�mero 2: " << numero2 << "\n";
		cout << "O n�mero 1 n�o � maior do que o n�mero 2 \n\n";
	}
	
	
	
	fruta = "Ma��";
	
	if ( fruta == "Ma�a" ){
	 
	    cout << "\n\n---------- Resultado IF Fruta ---------- \n\n";
		cout << "Fruta: " << fruta << "\n";
		cout << "A fruta � ma�� \n";	
		
	}
	
	else {
		
		cout << "\n\n---------- Resultado IF Fruta ---------- \n\n";
		cout << "Fruta: " << fruta << "\n";
		cout << "A fruta n�o � ma�� \n";
	}
	
	
	system("pause"); // impede o fechamento ap�s a execu��o do c�digo
	return 0;
	
}
