#include <iostream>
#include <locale.h>

using namespace std;


int main(){
	
	setlocale(LC_ALL, "Portuguese");

    int numeroCor;
    
    //Menu de opcoes
    cout << "Digite um número para escolher o país que vai ganhar a copa do mundo! \n";
    cout << "1 - Alemanha: \n";
    cout << "2 - Brasil: \n";
    cout << "3 - Canadá: \n";
    cout << "4 - Sérvia: \n";
    cout << "5 - Suíça: \n";
    cout << "6 - Bélgica: \n";
    
    cin >> numeroCor;
    
    //switch = Escolha
    switch( numeroCor ){
    	
    	//case = Caso
    	case 1:
    		
    		cout << "Você escolheu a Alemanha para ganhar a copa do mundo! \n\n";
    		//break = Parar
    		break;
    		
    	case 2:
    		
    		cout << "Você escolheu o Brasil para ganhar a copa do mundo! \n\n";
    		break;
    	
    	case 3:
    		
    		cout << "Você escolheu o Canadá para ganhar a copa do mundo! \n\n";
    		break;
    		
    	case 4:
    		
    		cout << "Você escolheu a Sérvia para ganhar a copa do mundo! \n\n";
    		break;
    		
    	case 5:
    		
    		cout << "Você escolheu a Suíça para ganhar a copa do mundo! \n\n";
    		break;
    	
    	case 6:
    		
    		cout << "Você escolheu a Bélgica para ganhar a copa do mundo! \n\n";
    		break;
    	
    	// default = outro caso
    	default:
    		
    		cout << "Escolha inválida";
    		break;
    	
    	
	}
    
    
   
	system("pause");
	return 0;
}
