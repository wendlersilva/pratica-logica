#include <iostream>
#include <locale.h>

using namespace std;


int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	string pais;
	
	
	recomecar:
		
	cout << "Qual o pa�s vai ganhar a Copa do Mundo \n";
	cin >> pais;
	
	if ( pais == "Brasil" ){
		
		cout << "Muito bem, o Brasil vai ser o campe�o! \n ";
		
	}
	
	else  if ( pais == "BRASIL" ){
		
		cout << "Muito bem, o Brasil vai ser o campe�o! \n ";
	}
	
	else  if ( pais == "brasil" ){
		
		cout << "Muito bem, o Brasil vai ser o campe�o! \n ";
	}
	
	else{
		
	    cout << "\n";
		goto recomecar;
			
	}
	
	
	system("pause"); // impede o fechamento ap�s a execu��o do c�digo
	return 0;
	
}
