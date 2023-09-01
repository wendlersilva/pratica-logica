#include <iostream> 
#include <locale.h> 


using namespace std;

int main(){
	

	setlocale(LC_ALL, "Portuguese");
	
	int linha, coluna, matriz[2][2];
	

	for( linha = 0; linha < 2; linha++ ){ 
		
		for ( coluna = 0; coluna < 2; coluna++ ){ 
			
			cout << "Digite o número da Linha: " << linha << " - Coluna: " << coluna << ": ";
			cin >> matriz[linha][coluna]; 
			
		}
		
	}
	
	cout << "\n\nNúmeros digitados:\n";
	
	for( linha = 0; linha < 2; linha++ ){
		
		for ( coluna = 0; coluna < 2; coluna++ ){
			
			cout << matriz[linha][coluna] << "  ";
			
		}
		
		cout << "\n";
		
	}
	

	for ( linha = 0; linha < 2; linha++ ){
		
		for ( coluna = 0; coluna < 2; coluna++ ){
			
	
			matriz[linha][coluna] = matriz[linha][coluna] * 2;
			
		}
		
	}
	
	cout << "\n\nNúmeros multiplicados por 2\n";
	
	for( linha = 0; linha < 2; linha++ ){
		
		for ( coluna = 0; coluna < 2; coluna++ ){
			
			cout << matriz[linha][coluna] << "  ";
			
		}
		
		cout << "\n";
		
	}
	
			
	system("pause");
	return 0;
}
