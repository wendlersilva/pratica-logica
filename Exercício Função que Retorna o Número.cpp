#include <iostream> 
#include <locale.h> 

using namespace std;


int verificaMenorNumero(int primeiroNumero, int segundoNumero);

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int numero1, numero2, resultado;
	
	cout << "Digite o primeiro n�mero: ";
	cin >> numero1;
	
	cout << "Digite o segundo n�mero: ";
	cin >> numero2;
	
	resultado = verificaMenorNumero(numero1, numero2);
	
	cout << "\n\nO menor n�mero � " << resultado << "\n";
	
	
	system("pause");
	return 0;
}

int verificaMenorNumero(int primeiroNumero, int segundoNumero){
	
	if( primeiroNumero > segundoNumero ){
		
		return segundoNumero;
		
	}else{
		
		return primeiroNumero;
		
	}
}

