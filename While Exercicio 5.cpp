#include <iostream>
#include <locale.h>

using namespace std;


int main(){
	
	setlocale(LC_ALL, "Portuguese");

    int numero, quadrado;
    
    cout << "Digite um n�mero inteiro (digite 0 para encerrar): \n";
    cin >> numero;
    
    while ( numero != 0 ){
	
    
        quadrado = numero * numero;
        cout << "O quadrado do n�mero: " << numero << " � " << quadrado << "\n";


        cout << "Digite um n�mero inteiro (digite 0 para encerrar): \n";
        cin >> numero;
    
    
}
	system("pause");
	return 0;

}
