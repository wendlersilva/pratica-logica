#include <iostream> 
#include <locale.h> 

using namespace std;

int somarNumeros(int numeroRecebido);

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int numero, somatorio;
	
	cout << "Digite o número: ";
	cin >> numero;
	
	somatorio = somarNumeros(numero);
	
	cout << "A soma dos números de 1 até " << numero << " é " << somatorio << "\n";
	
	
	
	system("pause");
	return 0;
}

int somarNumeros(int numeroRecebido){
	
	int resultado;
	if(numeroRecebido == 1){
		
		return(1);
	}else{
		
		resultado = numeroRecebido + somarNumeros(numeroRecebido - 1);
		
	}
	
		return(resultado);
}
