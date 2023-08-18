#include <iostream>
#include <locale.h>

using namespace std;


int main(){
	
	setlocale(LC_ALL, "Portuguese");

   
   char letra;
   
   cout << "Digite uma letra: \n";
   cin >> letra;
   
   
   if ( letra == 'A' || letra == 'E' || letra == 'I' || letra == 'U' || letra == 'u'){
   	
   	cout << "Você digitou uma vogal \n";
   	
   }
   
   
   else if ( letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u'){
   	
   	cout << "Você digitou uma vogal \n";
   	
   }
   
   else{
   	
   	cout << "Você digitou uma consoante \n"; 
   	
   }
    
    
	system("pause");
	return 0;
}
