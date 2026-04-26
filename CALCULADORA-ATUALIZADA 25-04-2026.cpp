/*HIGOR CONCEIÇÃO FREITAS - DEV INICIANTE */ 
#include <iostream>
#include <locale>
using namespace std;
int main(){
	setlocale(LC_ALL, "Portuguese" );
	
	string veze , resposta , tabu , soma , subtrair , divisao;
	
	float num;
	float s;
	
	int tabuada , cont , vezes , lim , s1 , s2 ,s3 , s4 , s5 , s6 , s7 , s8 , s9 , s10 , r , par , t1 , t2 , t3 , t4 , t5 , t6 , t7 , t8 , t9 , t10 , tf , v1 , v2 , v3 , v4 , v5 , v6 , v7 , v8 , v9 , v10 , vf , d1 , d2 , d3 , d4 , d5 , d6 , d7 , d8 , d9 , d10 , df;
	
    cout << " \n MUITO IMPORTANTE MANIN SE QUISER FAZER UMA SOMA OU ALGO ASSIM DIGITE IGUAL ESTA ESCRITO NO DEPOIS DO DIGITE EXEMPLO DIGITE soma ELE SOMA  TEM QUE SE O soma IGUAL ;) \n ";
    cout << "\n ------------------------------------------------------------------------- \n";
	cout << "Voce deseja cacular vezes , soma , divisao ou subtrãçao ? \n";
	cout << "Digite veze pra fazer vezes , digite soma para somar , digite divisao pra divisão , digite subtrair pra subtrair , digite tabu pra fazer a tabuada : \n";
	cin >> resposta;
	
	cont = 0;
	vezes = 0;
	tabuada = 0;
	
	while(resposta == "tabu"){
	cout << "Digite um numero inteiro :";
	cin >> num ;
	cout << "Digite um limitador pra Tabuada :";
	cin >> lim;
	
	while(cont <= lim){
		tabuada = num * vezes;
		cout << "\n Tabuada do numero digitado : \n " << num << "*" << vezes << "=" << tabuada;
		cont = cont + 1 ;
		vezes = vezes + 1;}}
		
	while(resposta == "soma"){
	    cout << "Digite até dez números pra sua soma, pode ter zero se você não quiser somar 10 números :";
	    cin >> s1 >> s2 >> s3 >> s4 >> s5 >> s6 >> s7 >> s8 >> s9 >> s10;
	    r = s1 + s2 + s3 + s4 + s5 + s6 + s7 + s8 + s9 + s10;
	    cout << "O resultado de :" << s1 << "+" << s2 << "+" << s3 << "+" << s4 << "+" << s5 << "+" << s6 << "+" << s7 << "+" << s8 << "+" << s9 << "+" << s10 << "=" << r;
	    cout << " \n ------------------------------------------------------------ \n" ;
		cout << "\n AVISOOO !!!!!!!!!! SE DESEJA PARAR DE SOMAR INSIRA 1 \n";
	    cin >> par;
	    if(par == 1){
		break;
	}
}
    while(resposta == "subtrair"){
    	cout << "Digite até dez números para subtrai-los, pode conter zero se você não deseja subtrair 10 números :";
    	cin >> t1 >> t2 >> t3 >> t4 >> t5 >> t6 >> t7 >> t8 >> t9 >> t10 ;
    	tf = t1 - t2 - t3 - t4 - t5 - t6 - t7 - t8 - t9 - t10;
    	cout << "O resultado de :" << t1 << "-" << t2 << "-" << t3 << "-" << t4 << "-" << t5 << "-" << t6 << "-" << t7 << "-" << t8 << "-" << t9 << "-" << t10 << "=" << tf; 
    	cout << " \n ------------------------------------------------------------- \n ";
		cout << "\n AVISOOO!!!!!!!! SE DESEJA PARAR DE SUBTRAIR INSIRA 1 \n";
		cin >> par ;
    	if(par == 1){
    		break;
		}
	}
	while(resposta == "veze"){
		cout << "Digite até dez números para multiplicarmos, se você não quiser multiplicar 10 números coloque o 1 nos outros espaços para não influenciar o resultado final meu nobre seja feliz";
		cin >> v1 >> v2 >> v3 >> v4 >> v5 >> v6 >> v7 >> v8 >> v9 >> v10 ;
		/* Já é 23:12 pm meu Deus esse código parece que não acaba ;) relato de um progamador iniciante */ 
		vf = v1 * v2 * v3 * v4 * v5 * v6 * v7 * v8 * v9 * v10 ;
		cout << "O resultado de :" << v1 << "*" << v2 << "*" << v3 << "*" << v4 << "*" << v5 << "*" << v6 << "*" << v7 << "*" << v9 << "*" << v10 << "=" << vf ;
		cout << "\n ------------------------------------------------------------------------ \n";
		cout << "\n AVISOOOOOOOOOOO!!!!!! SE DESEJA PARAR DE MULTIPLICAR INSIRA 1 \n";
		cin >> par;
		if(par == 1){
			break;
		}

}
   while(resposta == "divisao"){
   	cout << "Digite até dez números para dividir, se você não quiser dividir 10 números coloque o 1 nos outros espaços para não influenciar o resultado final";
   	cin >> d1 >> d2 >> d3 >> d4 >> d5 >> d6 >> d7 >> d8 >> d9 >> d10;
   	df = d1 / d2 / d3 / d4 / d5 / d6 / d7 / d8 / d9 / d10;
   	cout << "O resultado de :" << d1 << "/" << d2 << "/" << d3 << "/" << d4 << "/" << d5 << "/" << d6 << "/" <<  d7 << "/" << d8 << "/" << d9 << "/" << d10 << "=" << df;
   	cout << "\n ----------------------------------------------------------------------------- \n";
   	cout << "\n AVISOOOOOOOOOOO!!!!!!!!!!!!!!!! SE DESEJA PARAR DE DIVIDIR INSIRA 1 \n";
   	cin >> par;
   	if(par == 1){
   		break;
	   }
   }
/* 23:53 pm eu iniciei por volta das 18:30 minha mão nem tá aguentando mais ainda falta revisar se tá bonitinho meus nobres ;) */

 }
		
	  
	    

