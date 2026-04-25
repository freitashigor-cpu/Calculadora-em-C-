#include <iostream>
#include <locale>
using namespace std;
int main(){
	setlocale(LC_ALL, "Portuguese" );
	string veze , resposta;
	
	float num;
	float s;
	
	int tabuada;
	int cont;
	int vezes ;
	int lim; 

	cout << "Voce deseja cacular vezes , soma , divisao ou subtraçao ?";
	cout << "Digite veze pra fazer vezes , digite soma para somar , digite divisao pra divisao , digite subtrair pra subtrair";
	cin >> resposta;
	
	cont = 0;
	vezes = 0;
	tabuada = 0;
	
	while(resposta == veze){
	cout << "Digite um numero inteiro :";
	cin >> num ;
	cout << "Digite um limitador pra Tabuada :";
	cin >> lim;}
	
	while(cont <= lim){
		tabuada = num * vezes;
		cout << "\n Tabuada do numero digitado : \n " << num << "*" << vezes << "=" << tabuada;
		cont = cont + 1 ;
		vezes = vezes + 1;
	}
	}


