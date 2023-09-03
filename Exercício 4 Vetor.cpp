#include <iostream> 
#include <locale.h> 

using namespace std;

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	
	int vetor[5], posicao, maior, menor, igual;
	
	maior = 0;
	menor = 0;
	igual = 0;	
	

	for( posicao = 0; posicao < 5; posicao++ ){
		
		cout << "Digite o número da posição " << posicao << ": \n";
		cin >> vetor[posicao];
		
	}
	
	
	for( posicao = 0; posicao < 5; posicao++ ){
		
	
		if( vetor[posicao] > vetor[0]){ 
			
			maior++;
			
		}
		

		if( vetor[posicao] < vetor[0]){ 
			
			menor++;
			
		}
		
		
		if( vetor[posicao + 1] == vetor[0]){ 
			
			igual++;
			
		}
		
		cout << "Maiores: " << vetor[posicao] << "\n";
		cout << "Menores: " << vetor[posicao] << "\n";
		cout << "Iguais: " << vetor[posicao + 1] << "\n";
		
	}
	
	cout << "\n\nTotal de números maiores que " << vetor[0] << ": " << maior;
	cout << "\nTotal de números menores que " << vetor[0] << ": " << menor;
	cout << "\nTotal de números iguais a " << vetor[0] << ": " << igual << "\n";
			
	
	system("pause");
	return 0;
}
