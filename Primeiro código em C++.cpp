#include <iostream>
#include <locale.h>
using namespace std;
/*
Iostream é uma biblioteca
I - Vem de Input - Entrada
0 - Vem de Output saída
*/

/*
Todo programa em C++ tem uma e somente funcao principal que é a funcao MAIN
*/
int main (){
	
	setlocale(LC_ALL, "");
	
	cout << "Olá, mundo!";


	return 0;
}
