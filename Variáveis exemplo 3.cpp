#include <iostream>
#include <locale.h>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	int numero1, numero2, numero3, soma;
	
	cout << "Digite o primeiro n�mero: \n";
	cin >> numero1;
	
	cout << "Digite o segundo n�mero: \n";
	cin >> numero2;
	
	cout << "Digite o terceiro n�mero: \n";
	cin >> numero3;
	
	soma = numero1 + numero2 + numero3;
	
	cout << "A soma dos 3 n�meros �: " << soma << "\n";
	
	system("pause");
	return 0;
}
