#ifndef Escola_H_INCLUDED
#define Escola_H_INCLUDED

class Pai{
	
	public:
		
		void imprimiDadosCasaPai();
	
};

void Pai::imprimiDadosCasaPai(){
	
	std::cout << "----- Dados casa Pai -----" << std::endl;
	std::cout << "C�digo: 1 " << std::endl;
	std::cout << "Propiet�rio: Matheus Alves" << std::endl;
	std::cout << "Estado: Santa Catarina " << std::endl;
	std::cout << "Cidade: Lages " << std::endl;
	std::cout << "Valor: R$ 500.000,00 " << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	
	
}

class Mae{
	
	public:
		
		void imprimiDadosCasaMae();
	
};

void Mae::imprimiDadosCasaMae(){
	
	std::cout << "----- Dados casa Mae -----" << std::endl;
	std::cout << "C�digo: 2 " << std::endl;
	std::cout << "Propiet�ria: Alice Alves" << std::endl;
	std::cout << "Estado: Santa Catarina " << std::endl;
	std::cout << "Cidade: Florian�polis " << std::endl;
	std::cout << "Valor: R$ 4.500.000,00 " << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	
	
}

class Filho : public Pai, public Mae{
	
};

#endif
