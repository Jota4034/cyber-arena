#pragma once
#include <iostream>
#include <string>

using namespace std;

	class Personagem {
	
		
	public:
		
	string nome;
	
	int vida;
	
	int ataque;
	
	int defesa;
	
	Personagem(string n, int v, int a, int d)
		: nome(n), vida(v), ataque(a), defesa(d) {}
			
	void exibir (){
		
		cout << "Personagem: " << nome   << endl;
		
		cout << "Vida: "       << vida   << endl;
		
		cout << "Ataque: "     << ataque << endl;
		
		cout << "Defesa: "	   << defesa << endl;
	}

	void calcularDano (int ataqueInimigo, int dano){
		
	dano = ataqueInimigo - defesa;
	
	if (dano < 0) dano = 0;
	
	vida -= dano;
	
}
	
	void resultado (){
		
		cout << "Seu HP caiu para: " << vida << endl;
		
	}



	bool estaVivo (){
	
	if (vida > 0){
		
	return true;
	
	} 
	
	else{
		
	return false;
	
}

}

};
