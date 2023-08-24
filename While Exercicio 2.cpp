#include <iostream>
#include <locale.h>

using namespace std;


int main(){
	
	setlocale(LC_ALL, "Portuguese");

    int numero;
    
    while ( numero <= 10 ){
    	
    	cout << numero << endl;
    	
    	numero++;

}
	system("pause");
	return 0;

}

