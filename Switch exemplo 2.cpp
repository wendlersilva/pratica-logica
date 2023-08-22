#include <iostream>
#include <locale.h>

using namespace std;


int main(){
	
	setlocale(LC_ALL, "Portuguese");

    int numeroApt;
    
    cout << "Digite o número do andar do Apartamento que deseja comprar: \n";
    cin >> numeroApt;
    
    switch (numeroApt){
    	
    	case 1:
    	case 2:
    	case 3:
    		
    		cout << "Andares de 1 ao 3 - R$ 200.000 \n\n";
			break;
			
		case 4:
		case 5:
		case 6:
			
			cout << "Andares de 4 ao 6 - R$ 400.000 \n\n";
			break;
			
		case 7:
		case 8:
		case 9:
			
			cout << "Andares de 7 ao 9 - R$ 500.000 \n\n";
			break;
			
		case 10:
		case 11:
		case 12:	
		case 13:
		case 14:
		case 15:
    	
    	    cout << "Andares de 10 ao 15 - R$ 600.000 \n\n";
			break;
			
			default:
				cout << "Opção inválida! \n\n";
			break;
	}
    
   
	system("pause");
	return 0;
}
