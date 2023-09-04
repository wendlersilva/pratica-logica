#include <iostream> 
#include <locale.h> 

using namespace std;

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int linha, coluna, matriz[3][3], numerosMaioresQueCinco;
	
	numerosMaioresQueCinco = 0;

	for( linha = 0; linha < 3; linha++ ){
		
		for( coluna = 0; coluna < 3; coluna++  ){
			
				cout << "Digite o número da Linha: " << linha << " - Coluna: " << coluna << ": ";
				cin >> matriz[linha][coluna];
				
				if( matriz[linha][coluna] > 5 ){
					
					numerosMaioresQueCinco++;
					
				}
			
		}
		
	}
	
	for( linha = 0; linha < 3; linha++ ){
		
		for( coluna = 0; coluna < 3; coluna++  ){
			
				cout << matriz[linha][coluna] << "  ";
				
			
		}
		
		cout << "\n";
		
	}
	
	cout << "\n\nNúmeros maiores que 5: " << numerosMaioresQueCinco << "\n";
	
	system("pause");
	return 0;
}
