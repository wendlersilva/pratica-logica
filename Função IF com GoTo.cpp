#include <iostream>
#include <locale.h>

using namespace std;


int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	string pais;
	
	
	recomecar:
		
	cout << "Qual o país vai ganhar a Copa do Mundo \n";
	cin >> pais;
	
	if ( pais == "Brasil" ){
		
		cout << "Muito bem, o Brasil vai ser o campeão! \n ";
		
	}
	
	else  if ( pais == "BRASIL" ){
		
		cout << "Muito bem, o Brasil vai ser o campeão! \n ";
	}
	
	else  if ( pais == "brasil" ){
		
		cout << "Muito bem, o Brasil vai ser o campeão! \n ";
	}
	
	else{
		
	    cout << "\n";
		goto recomecar;
			
	}
	
	
	system("pause"); // impede o fechamento após a execução do código
	return 0;
	
}
