#include <iostream>
#include <locale.h>

using namespace std;


int main(){
	
	setlocale(LC_ALL, "Portuguese");

    int numero, intervalo1, intervalo2, intervalo3, intervalo4, numeroForaIntervalo;
    
    intervalo1 = 0;
    intervalo2 = 0;
    intervalo3 = 0;
    intervalo4 = 0;
    numeroForaIntervalo = 0;
    
    while ( true ){
    	
    	cout << "Digite um número inteiro entre 0 e 40 (ou negativo para parar): \n";
    	cin >> numero;
    	
    	if ( numero < 0 ){
    		
    		break;
    		
		}
		
		if ( numero <= 10 ){
			
			intervalo1++;
			
		}else if  ( numero <= 20 ){
			
			intervalo2++;
			
	
		}else if  ( numero <= 30 ){
			
			intervalo3++;
			
		}else if  ( numero <= 40 ){
			
			intervalo4++;
		
		}else{
			numeroForaIntervalo++;
		}	
		
    	
	}
	
	
    cout << "\nDos números digitados:";
    cout << "\nNúmeros de [0-10]: " << intervalo1;
    cout << "\nNúmeros de [11-20]: " << intervalo2;
    cout << "\nNúmeros de [21-30]: " << intervalo3;
    cout << "\nNúmeros de [31-40]: " << intervalo4;
    cout << "\nNúmeros fora do intervalo: " << numeroForaIntervalo;


	


	system("pause");
	return 0;

}

