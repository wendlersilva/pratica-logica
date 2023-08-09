#include <iostream>
#include <locale.h>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	int numero1, numero2, numero3, soma;
	
	cout << "Digite o primeiro número: \n";
	cin >> numero1;
	
	cout << "Digite o segundo número: \n";
	cin >> numero2;
	
	cout << "Digite o terceiro número: \n";
	cin >> numero3;
	
	soma = numero1 + numero2 + numero3;
	
	cout << "A soma dos 3 números é: " << soma << "\n";
	
	system("pause");
	return 0;
}
