#include <iostream>
#include <locale.h>

using namespace std;


int main(){
	
	setlocale(LC_ALL, "Portuguese");

    double valorCompra, totalPagar;
    int codigo;
    
    cout << "Informe o valor total da compra: \n";
    cin >> valorCompra;
    
    cout << "Digite o c�digo: \n";
    cout << "1 - Cliente Comum (0% desconto) \n";
    cout << "2 - Funcion�rio (10% desconto) \n";
    cout << "3 - Cliente Vip (5% desconto) \n";
    cin >> codigo;

    switch (codigo){
    	
    	case 1:
    		cout << "\nCliente comum - 0% de desconto. \n";
    		cout << "Total a pagar: " << valorCompra << "\n";
    	  break;
    	
    	
    	case 2:
    		totalPagar = valorCompra - (valorCompra * 0.1);
    		cout << "\nFuncion�rio - 10% de desconto. \n";
    		cout << "Total a pagar: " << totalPagar << "\n";
     	  break;
    	
    	
    	case 3:
    		totalPagar = valorCompra - (valorCompra * 0.05);
    		cout << "\nCliente Vip - 5% de desconto. \n";
    		cout << "Total a pagar: " << totalPagar << "\n";
    	  break;
    	  
    	  default:
    	  	    cout << "Op��o inv�lida! \n";
    	  	  break;
	}
    
   
	system("pause");
	return 0;
}
