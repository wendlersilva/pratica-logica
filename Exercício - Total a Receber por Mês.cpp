#include <iostream>
#include <locale.h>

using namespace std;


int main(){
	
	setlocale(LC_ALL, "Portuguese");

    double valorHora, salarioDoMes, horasTrabalhadasMes;
    cout << "Digite quanto voc� ganha por hora trabalhada? \n";
    cin >> valorHora;
    
    cout << "Digite quantas horas voc� trabalhou nestes m�s? \n";
    cin >> horasTrabalhadasMes;
    
    salarioDoMes = valorHora * horasTrabalhadasMes;
    
    cout << "Seu sal�rio total no m�s �: " << salarioDoMes << "\n" ;
    
    
    
   
	system("pause");
	return 0;
}
