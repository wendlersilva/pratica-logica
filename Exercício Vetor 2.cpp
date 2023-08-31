#include <iostream> 
#include <locale.h> 


using namespace std;

int main(){
	

	setlocale(LC_ALL, "Portuguese");
	
	int contador, posicao;
	int vetorPrincipal[5], vetorNumerosImpares[5];
	
	for ( posicao = 0; posicao < 5; posicao++ ){
		
		cout << "Digite o número da posição " << posicao << ": ";
		cin >> vetorPrincipal[posicao];
		
		
		if ( vetorPrincipal[posicao] % 2 != 0){
			
			vetorNumerosImpares[contador] = vetorPrincipal[posicao];
			contador++;
			
		}
	}
	
	cout << "\n\nOs números ímpares são: \n";
	
	for ( posicao = 0; posicao < contador; posicao++ ){
		
		cout << vetorNumerosImpares[posicao] << "\n";
		
	}
	
	system("pause");
	return 0;
}
