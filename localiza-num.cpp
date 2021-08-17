#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	int vetor[100];
	int num, i, posicao;
	bool achei=false;
	
	cout << "Digite o numero que deseja encontrar: \n";
	cin >> num;
	
	for (i=0; i<100; i++)
		vetor[i] = i-1; {
			for (i=0; i<100; i++){
				if (vetor[i] == num){
					achei = true;
					posicao = i;
				}
			}
		}
	
	if (achei == false){
		cout << "Numero nao encontrado, tente novamente.";
	}
	else {
		cout << "O numero esta na posicao " << posicao << " do vetor." << endl;
	}
} 
