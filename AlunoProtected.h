#ifndef Escola_H_INCLUDED
#define Escola_H_INCLUDED


class AlunoEscolaA{
	

	public:
		
		int codigo;
		std::string nome;
		
		std::string getcpf();
		std::string getsexo();
		

	private:
	
		std::string cpf = "123.456.789-10";
		std::string sexo= "Feminino";
		
				
	protected:
	
		int idade;
		std::string escola;
		std::string turma;
	
};

string AlunoEscolaA::getcpf(){
	
	return cpf;
	
}

string AlunoEscolaA::getsexo(){
	
	return sexo;
	
}


class AlunoEscolaB : public AlunoEscolaA{
	
	public:
		
		AlunoEscolaB(){
			
			codigo = 1;
			nome = "Maria Silva";
			
			
			
			idade = 29;
			escola = "Escola ABC";
			turma = "8. série turma 2";
			
			std::cout << "------ Escola B -----" << std::endl;
			std::cout << "Código: " << codigo << std::endl;
			std::cout << "Nome: " << nome << std::endl;
			std::cout << "CPF: " << getcpf() << std::endl;
			std::cout << "Sexo: " << getsexo() << std::endl;
			std::cout << "Idade: " << idade << std::endl;
			std::cout << "Escola: " << escola << std::endl;
			std::cout << "Turma: " << turma << std::endl;
			std::cout << std::endl;
			
			
			
		}
	
	
};

class AlunoEscolaC{
	
	public:
		
		AlunoEscolaB contrutor;
		
		AlunoEscolaC(){
			
			contrutor.codigo = 1;
			contrutor.nome = "Elaine Moreia";
			
			std::cout << "------ Escola C -----" << std::endl;
			std::cout << "Código: " << contrutor.codigo << std::endl;
			std::cout << "Nome: " << contrutor.nome << std::endl;
			std::cout << std::endl;
			
			
			
		}
	
	
};



#endif
