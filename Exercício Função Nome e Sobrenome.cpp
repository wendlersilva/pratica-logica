#include <iostream> 
#include <locale.h> 

using namespace std;

void juntaNomeESobrenome(string textoNome, string textoSobrenome);

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
    string nome, sobrenome;
    
    cout << "Digite seu nome: \n";
    cin >> nome;
	
	cout << "Digite seu sobrenome: \n";
    cin >> sobrenome;
    
    juntaNomeESobrenome(nome, sobrenome);
    
	system("pause");
	return 0;
}

void juntaNomeESobrenome(string textoNome, string textoSobrenome){
	
	cout << "\n\nNome: " << textoNome << ", Sobrenome: " << textoSobrenome << "\n";
	
}
