#include <iostream>
#include <locale.h>

using namespace std;


int main(){
	
	setlocale(LC_ALL, "Portuguese");

   int numero1, numero2, contador;
   
   cout << "Digite um n�mero: \n";
   cin >> numero1;
   
   cout << "Digite outro n�mero: \n";
   cin >> numero2;
   
   for ( contador = numero1; contador <= numero2; contador++ ){
   	
       cout << contador << "\n";	
   	
   }
   
   
   
	system("pause");
	return 0;
}
