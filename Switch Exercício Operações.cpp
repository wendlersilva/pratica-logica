#include <iostream>
#include <locale.h>

using namespace std;


int main(){
	
	setlocale(LC_ALL, "Portuguese");

   double valor1, valor2;
   int opcao;
   
   cout << "Digite o primeiro número: \n";
   cin >> valor1;
   
   cout << "Digite o segundo número: \n";
   cin >> valor2;
   
   cout << "Qual operação você deseja fazer? \n";
   cout << "Digite 1 para Somar: \n";
   cout << "Digite 2 para Subtração: \n";
   cout << "Digite 3 para Divisão: \n";
   cout << "Digite 4 para Multiplicação: \n";
   cin >> opcao;
   
   switch (opcao){
   	
   	  case 1:
   	  	    cout << "O resultado da soma é: " << valor1 + valor2 << "\n";
   	      break;
   	  
   	  case 2:
   	  	    cout << "O resultado da subtração é: " << valor1 - valor2 << "\n";
   	      break;
   	
   	  case 3:
   	  	    cout << "O resultado da divisão é: " << valor1 / valor2 << "\n";
   	      break;
   	  
   	  case 4:
   	  	    cout << "O resultado da multiplicação é: " << valor1 * valor2 << "\n";
   	      break;
   	      
   	      
   	        default:
   	      	  cout << "Opção inválida";
   	      	break;
   }
    
   
	system("pause");
	return 0;
}
