#include <iostream>
#include <locale.h>

using namespace std;


int main(){
	
	setlocale(LC_ALL, "Portuguese");

   
	double soma, total, numero;
	soma = 0;
	total = 0;
	
	cout << "Digite um número maior que 0: \n";
	cin >> numero;
	
	while ( numero > 0 ){
		
		soma = soma + numero;
		total++;
		
		cout << "Digite um número maior que 0: \n";
	    cin >> numero;
		
	}
	
	cout << "\nQuantidade de números digitados: " << total << "\n";
    cout << "Média: " << soma / total << "\n";



	system("pause");
	return 0;

}

