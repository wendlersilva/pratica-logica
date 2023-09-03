#include <iostream> 
#include <locale.h> 

using namespace std;

int main(){
	

	setlocale(LC_ALL, "Portuguese");
	
	
	int matriz[3][3];
	int linha, coluna, somaDiagonal, somaPrimeiraLinha;
	
	for ( linha = 0; linha < 3; linha++ ){
		
		for( coluna = 0; coluna < 3; coluna++ ){
			
			cout << "Digite o número da Linha: " << linha << " - Coluna: " << coluna << ": ";
			cin >> matriz[linha][coluna];
			
		}
		
	}

	cout << "------- Valores Digitados --------\n";
	for ( linha = 0; linha < 3; linha++ ){
		
		for( coluna = 0; coluna < 3; coluna++ ){
			
			cout << matriz[linha][coluna] << "  ";
			
		}
		
		cout << "\n";
		
	}
	
	
	somaDiagonal = matriz[0][0] + matriz[1][1] + matriz[2][2];
	cout << "\n\nA soma da diagonal é: " << somaDiagonal << "\n";
	
	somaPrimeiraLinha = matriz[0][0] + matriz[0][1] + matriz[0][2];
	cout << "\n\nA soma da primeira linha é: " << somaPrimeiraLinha << "\n";
			
	system("pause");
	return 0;
}
