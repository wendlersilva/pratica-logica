#include <iostream>
#include <locale.h>

using namespace std;


int main(){
	
	setlocale(LC_ALL, "Portuguese");

    double salarioHora, horasTrabalhadas, ImpostoRenda, Inss, Sindicato, salarioBruto, salarioLiquido;
    
    cout << "Digite quanto voc� ganha por hora: \n";
    cin >> salarioHora;
    
    
    cout << "Digite quantas horas voc� trabalhou neste m�s: \n";
    cin >> horasTrabalhadas;
	
	salarioBruto = salarioHora * horasTrabalhadas;
	
	ImpostoRenda =  salarioBruto * (11.0 / 100);
	Inss =  salarioBruto * (8.0 / 100);
	Sindicato =  salarioBruto * (5.0 / 100);
	salarioLiquido =  salarioBruto - ImpostoRenda - Inss - Sindicato;
	
	cout << "\n-----------\n";
	cout << "+ Sal�rio Bruto: R$ " << salarioBruto << "\n";
	cout << "- Imposto de Renda (11%) : R$" << ImpostoRenda << "\n";
	cout << "- INSS (8%) : R$ " << Inss << "\n";
	cout << "- Sindicato (5%) : R$ " << Sindicato << "\n";
	cout << "- Sal�rio L�quido: R$" << salarioLiquido << "\n";
	
	system("pause");
	return 0;
	
}
