#include <iostream>
#include <locale.h>

using namespace std;


int main(){
	
	setlocale(LC_ALL, "Portuguese");

    int numero1, numero2, numero3, operacao1, operacao2, operacao3;
    
    cout << "Digite um número inteiro: \n";
    cin >> numero1;
    
    
    cout << "Digite o segundo número inteiro: \n";
    cin >> numero2;
    
    
    cout << "Digite o terceiro número inteiro: \n";
    cin >> numero3;
    
    
    operacao1 = (numero1 + numero1) + (numero2 / 2);
    
    operacao2 = (numero1 * 3) + numero3;
    
    operacao3 = numero3 * 2;
    
    cout << "\n";
    cout << "1) " << operacao1 << endl;
    cout << "2) " << operacao2 << endl;
    cout << "3) " << operacao3 << endl;
    
    
    
   
	system("pause");
	return 0;
}
