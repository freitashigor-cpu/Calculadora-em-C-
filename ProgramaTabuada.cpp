#include <iostream>
#include <locale>
using namespace std;
int main(){
	setlocale(LC_ALL, "Portuguese" );
	float num;
	float s;
	int tabuada;
	int cont;
	int vezes ;
	int lim;
	cont = 0;
	vezes = 0;
	tabuada = 0;
	cout << "Digite um numero inteiro :";
	cin >> num ;
	cout << "Digite um limitador pra Tabuada :";
	cin >> lim;
	while(cont <= lim){
		tabuada = num * vezes;
		cout << "\n Tabuada do numero digitado : \n " << num << "*" << vezes << "=" << tabuada;
		cont = cont + 1 ;
		vezes = vezes + 1;
	}
	}


