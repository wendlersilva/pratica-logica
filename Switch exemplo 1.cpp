#include <iostream>
#include <locale.h>

using namespace std;


int main(){
	
	setlocale(LC_ALL, "Portuguese");

    int numeroCor;
    
    //Menu de opcoes
    cout << "Digite um n�mero para escolher o pa�s que vai ganhar a copa do mundo! \n";
    cout << "1 - Alemanha: \n";
    cout << "2 - Brasil: \n";
    cout << "3 - Canad�: \n";
    cout << "4 - S�rvia: \n";
    cout << "5 - Su��a: \n";
    cout << "6 - B�lgica: \n";
    
    cin >> numeroCor;
    
    //switch = Escolha
    switch( numeroCor ){
    	
    	//case = Caso
    	case 1:
    		
    		cout << "Voc� escolheu a Alemanha para ganhar a copa do mundo! \n\n";
    		//break = Parar
    		break;
    		
    	case 2:
    		
    		cout << "Voc� escolheu o Brasil para ganhar a copa do mundo! \n\n";
    		break;
    	
    	case 3:
    		
    		cout << "Voc� escolheu o Canad� para ganhar a copa do mundo! \n\n";
    		break;
    		
    	case 4:
    		
    		cout << "Voc� escolheu a S�rvia para ganhar a copa do mundo! \n\n";
    		break;
    		
    	case 5:
    		
    		cout << "Voc� escolheu a Su��a para ganhar a copa do mundo! \n\n";
    		break;
    	
    	case 6:
    		
    		cout << "Voc� escolheu a B�lgica para ganhar a copa do mundo! \n\n";
    		break;
    	
    	// default = outro caso
    	default:
    		
    		cout << "Escolha inv�lida";
    		break;
    	
    	
	}
    
    
   
	system("pause");
	return 0;
}
