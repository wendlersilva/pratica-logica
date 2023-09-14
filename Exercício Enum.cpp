#include <iostream>
#include <locale.h> 

using namespace std;


int main(){

	setlocale(LC_ALL, "Portuguese");
	
	enum letrasAlfabeto{
		a,
		b,
		c,
		d,
		e,
		f,
		g,
		h,
		i,
		j,
		k
	};
	
	int contador;
	
	for ( contador = a; contador <= k; contador++ ){
		
			cout << contador << "\n";
		
	}
			
			
	system("pause");
	return 0;
}

