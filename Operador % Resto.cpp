#include <iostream>
#include <locale.h>

using namespace std;


int main(){
	
	setlocale(LC_ALL, "Portuguese");

    int numero1, resto;
    
    numero1= 10;
    resto = numero1 % 2;
    
    cout << "O resto da divis�o � " << resto << "\n";
    
    
    int numero2, resto2;
    numero2 = 10;
    resto2 = numero2 % 3;
    
    cout << "O resto da divis�o � " << resto2 << "\n";
    
    
    
    
	
	system("pause");
	return 0;
	
}
