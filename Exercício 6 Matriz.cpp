#include <iostream> 
#include <locale.h> 

using namespace std;

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int linha, coluna, matriz[3][3];
	
	for ( linha = 0; linha < 3; linha++ ){
		
		for( coluna = 0; coluna < 3; coluna++ ){
			
			cout << "Digite o número da Linha: " << linha << " - Coluna: " << coluna << ": ";
			cin >> matriz[linha][coluna];
			
		}
		
	}
	
	cout << "------- Valores Originais -----\n\n";
	for ( linha = 0; linha < 3; linha++ ){
		
		for( coluna = 0; coluna < 3; coluna++ ){
			
			cout << matriz[linha][coluna] << "   ";
			
			
		}
		
		cout << "\n";
		
	}
	
	for ( linha = 0; linha < 3; linha++ ){
		
		for( coluna = 0; coluna < 3; coluna++ ){
			
			matriz[linha][coluna] = matriz[linha][coluna] * 2;
			
			
		}
		
		cout << "\n";
		
	}
	
	cout << "\n\n------- Valores Multiplicados por 2 Originais -----\n\n";
	for ( linha = 0; linha < 3; linha++ ){
		
		for( coluna = 0; coluna < 3; coluna++ ){
			
			cout << matriz[linha][coluna] << "   ";
			
			
		}
		
		cout << "\n";
		
	}
	
	
	system("pause");
	return 0;
}
