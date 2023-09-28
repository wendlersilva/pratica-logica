#ifndef Escola_H_INCLUDED
#define Escola_H_INCLUDED

class Aluno{
	
	public:
	
		int idade;
		std::string nome;
		std::string sexo;
		std::string cpf;
		
		DadosAluno(){
			
			idade = 28;
			nome = "Amanda Oliveira";
			sexo = "Feminino";
			cpf = "111.111.111-11";
			
			std::cout << "Idade: " << idade << std::endl;
			std::cout << "Nome: " << nome << std::endl;
			std::cout << "Sexo: " << sexo << std::endl;
			std::cout << "CPF: " << cpf << std::endl;
			std::cout << std::endl;
			std::cout << std::endl;
			
		}
		
		DadosAluno(string cpfAluno){
			
			
			cpf = cpfAluno;
			
			
			std::cout << "------- Metodo contrutor 2 ----- " << std::endl;
			std::cout << "CPF: " << cpfAluno << std::endl;
			std::cout << std::endl;
			std::cout << std::endl;
			
		}
		
		DadosAluno(string cpfAluno, string nomeCompleto, int idadeAluno, string sexoAluno){
			
			
			idade = idadeAluno;
			nome = nomeCompleto;
			sexo = sexoAluno;
			cpf = cpfAluno;
			
			std::cout << "------- Metodo contrutor 3 ----- " << std::endl;
			std::cout << "CPF: " << cpf << std::endl;
			std::cout << "Idade: " << idade << std::endl;
			std::cout << "Nome: " << nome << std::endl;
			std::cout << "Sexo: " << sexo << std::endl;
			std::cout << "CPF: " << cpf << std::endl;
			std::cout << std::endl;
			std::cout << std::endl;
			
		}
	
};

#endif
