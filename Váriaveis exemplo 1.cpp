#include <iostream>
#include <locale.h>
using namespace std;

//Todo programa em c tem uma e somente funcao principal que é a funcao main
int main (){ 
	
	//Para usarmos acentos
	setlocale(LC_ALL, ""); 
	
	//variavel é um lugar na memória aonde vamos guardar algo temporariamente
    int numerosInteiros = 3; 
    double casasDecimais = 9.99;
    char letra = 'a';
    string textos = "Aluna: Maria";
    bool verdadeiroFalso = false;
    
    cout << numerosInteiros << "\n";
    cout << casasDecimais << "\n";
    cout << letra << "\n";
    cout << textos << "\n";
    cout << verdadeiroFalso << "\n";


    //a funcao main diz que retornar um inteiro, entao colocamos o 0 como um tipo de retorno
	return 0;
}
