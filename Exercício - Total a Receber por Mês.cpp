#include <iostream>
#include <locale.h>

using namespace std;


int main(){
	
	setlocale(LC_ALL, "Portuguese");

    double valorHora, salarioDoMes, horasTrabalhadasMes;
    cout << "Digite quanto você ganha por hora trabalhada? \n";
    cin >> valorHora;
    
    cout << "Digite quantas horas você trabalhou nestes mês? \n";
    cin >> horasTrabalhadasMes;
    
    salarioDoMes = valorHora * horasTrabalhadasMes;
    
    cout << "Seu salário total no mês é: " << salarioDoMes << "\n" ;
    
    
    
   
	system("pause");
	return 0;
}
