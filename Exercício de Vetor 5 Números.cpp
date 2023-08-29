#include <iostream> 
#include <locale.h> 


using namespace std;

int main(){
	

	setlocale(LC_ALL, "Portuguese");
	
	int vetorNumeros[5];
	int contador;
	
	for ( contador = 0; contador < 5; contador++ ){
		
		cout << "Digite o número da posição: " << contador  << " : ";
		cin >> vetorNumeros[contador];
	}
	
	for ( contador = 4; contador >= 0; contador-- ){
		
		cout << vetorNumeros[contador] << "\n";
		
	}
	
	
	system("pause");
	return 0;
}
