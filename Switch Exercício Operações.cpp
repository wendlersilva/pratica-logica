#include <iostream>
#include <locale.h>

using namespace std;


int main(){
	
	setlocale(LC_ALL, "Portuguese");

   double valor1, valor2;
   int opcao;
   
   cout << "Digite o primeiro n�mero: \n";
   cin >> valor1;
   
   cout << "Digite o segundo n�mero: \n";
   cin >> valor2;
   
   cout << "Qual opera��o voc� deseja fazer? \n";
   cout << "Digite 1 para Somar: \n";
   cout << "Digite 2 para Subtra��o: \n";
   cout << "Digite 3 para Divis�o: \n";
   cout << "Digite 4 para Multiplica��o: \n";
   cin >> opcao;
   
   switch (opcao){
   	
   	  case 1:
   	  	    cout << "O resultado da soma �: " << valor1 + valor2 << "\n";
   	      break;
   	  
   	  case 2:
   	  	    cout << "O resultado da subtra��o �: " << valor1 - valor2 << "\n";
   	      break;
   	
   	  case 3:
   	  	    cout << "O resultado da divis�o �: " << valor1 / valor2 << "\n";
   	      break;
   	  
   	  case 4:
   	  	    cout << "O resultado da multiplica��o �: " << valor1 * valor2 << "\n";
   	      break;
   	      
   	      
   	        default:
   	      	  cout << "Op��o inv�lida";
   	      	break;
   }
    
   
	system("pause");
	return 0;
}
