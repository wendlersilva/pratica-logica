#include <iostream>
#include <locale.h>

using namespace std;


int main(){
	
	setlocale(LC_ALL, "Portuguese");

   
   char sexo;
   
   cout << "Digite F para Feminino ou M para Masculino: \n";
   cin >> sexo;
   
   if ( sexo == 'F' || sexo == 'f' ){
   	
   cout << "F - Feminino \n\n";
   	
   }
    
   else if ( sexo == 'M' || sexo == 'm' ){
   	
   cout << "M - Masculino \n\n";
   	
   }
   
   
   else{
   	
   	cout << "Sexo Inválido \n\n";
   	
   }
    
    
	system("pause");
	return 0;
}
