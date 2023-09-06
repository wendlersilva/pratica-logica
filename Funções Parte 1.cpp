#include <iostream> 
#include <locale.h> 

using namespace std;

void funcaoMensagem();
void somarNumeros(int numero1, int numero2);
int somarTresNumeros(int numero1, int numero2, int numero3);

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	funcaoMensagem();
	
	somarNumeros(12, 20);
	
	int n1, n2, n3, soma;
	
	cout << "Digite o primeiro número: ";
	cin >> n1;
	
	cout << "Digite o segundo número: ";
	cin >> n2;
	
	cout << "Digite o terceiro número: ";
	cin >> n3;
	
	soma = somarTresNumeros(n1, n2, n3);
	
	cout << "\n\nTotal soma 3 números: " << soma << "\n";
	

	system("pause");
	return 0;
}

int somarTresNumeros(int numero1, int numero2, int numero3){
	
	return numero1 + numero2 + numero3;
	
}

void somarNumeros(int numero1, int numero2){
	
	cout << "Número 1: " << numero1 << endl;
	cout << "Número 2: " << numero2 << endl;
	cout << "Total: " << numero1 + numero2 << endl;
	
}

void funcaoMensagem(){
	
	cout << "Curso de Lógica de Programação!\n\n";
	
}
