#include <iostream>
#include <locale.h>

using namespace std;


int main(){
	
	setlocale(LC_ALL, "Portuguese");

	int numero1;
	
	
	numero1 = 0;
	cout << "-------- Exemplo 1 -------- \n";
	cout << numero1 << "\n";
	
	
	numero1 = numero1 + 1;
	cout << "-------- Exemplo 2 -------- \n";
	cout << numero1 << "\n";
	
	
	numero1++;
	cout << "-------- Exemplo 3 -------- \n";
	cout << numero1 << "\n";
	
	
	numero1--;
	cout << "-------- Exemplo 4 -------- \n";
	cout << numero1 << "\n";
	
	
	numero1 += 1;
	cout << "-------- Exemplo 5 -------- \n";
	cout << numero1 << "\n";
	
	
    
    
   
	system("pause");
	return 0;
}
