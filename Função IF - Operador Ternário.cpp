#include <iostream>
#include <locale.h>

using namespace std;


int main(){
	
	setlocale(LC_ALL, "Portuguese");

   string letra, mensagem;
   
   cout << "Digite uma letra: ";
   cin >> letra;
   
   (letra == "a" ) ? mensagem = "Você digitou a letra A" : mensagem = "Você não digitou a letra A" ;
   
   cout << "--------------\n";
   cout << "Letra digitada: " << letra << endl;
   cout << "Resultado: " << mensagem << endl << endl;
   
   //------------------------------------------//
   
   string vogal, resultado;
   
   cout << "Digite uma Vogal: ";
   cin >> vogal;
   
   (vogal == "a") ? resultado = "Vogal A" : (vogal == "e") ? resultado = "Vogal E" : (vogal == "i") ? resultado = "Vogal I" : (vogal == "o") ? resultado = "Vogal O" : (vogal == "u") ? resultado = "Vogal U" : resultado = "Consoante"+resultado;
   
   cout << "--------------\n";
   cout << "Vogal digitada: " << letra << endl;
   cout << "Resultado: " << resultado << endl << endl;
   
   cout << "--------- Exemplo 2 Vogal ou Consoante ----------\n";
   cout << "Letra digitada: " << vogal << endl;
   cout << "Resultado: " << resultado << endl << endl;
   
   
   
   
	system("pause");
	return 0;
}
