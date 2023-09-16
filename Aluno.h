#ifndef Aluno_H_INCLUDED
#define Aluno_H_INCLUDED

class Aluno{
	
	public:
		
		int codigo;
		std::string nome;
		int idade;
		std::string sexo;
		
		
		Aluno(int codigoAluno);
		
		void exibirDadosNaTela();
	
};

void Aluno::exibirDadosNaTela(){
	
	std::cout << "C�digo: " << codigo << std::endl;
	std::cout << "Nome: " << nome << std::endl;
	std::cout << "Idade: " << idade << std::endl;
	std::cout << "Sexo: " << sexo << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	
}

Aluno::Aluno(int codigoAluno){
	
	if( codigoAluno == 1 ){
		
		codigo = 1;
		nome = "Wendler Silva";
		idade = 27;
		sexo = "Masculino";
		
	}else if( codigoAluno == 2 ){
		
		codigo = 2;
		nome = "Pedro Martins";
		idade = 27;
		sexo = "Masculino";
		
	}else if( codigoAluno == 3 ){
		
		codigo = 3;
		nome = "Raquel Moreira";
		idade = 39;
		sexo = "Feminino";
		
	}else if( codigoAluno == 4 ){
		
		codigo = 4;
		nome = "Berenice Alves";
		idade = 39;
		sexo = "Feminino";
		
	}
	
}


#endif
