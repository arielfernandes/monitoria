/*
 Fazer um programa com um vetor de N posições (onde N deve ser lido no início do programa) que receba aleatoriamente em cada uma de suas posições um número inteiro de 0 à 10.
Apresentar o vetor na sequência. 
 */

#include <iostream>
#include <stdio.h>

using namespace std;
int main()
{
	setlocale(LC_ALL, "portuguese");
	int n = 0, numero=0;
	
	cout << "Informe o valor para n: " << endl;
	cin >> n; 

	int arr[n];

	for( int i = 0; i < n; i++ ){
		cout << "Informe um número: " << endl;
		cin >> numero;
		arr[i] = numero;
	}

	cout << "---------------------" << endl;
	for( int i = 0; i < n; i++ ){
		cout << arr[i] << endl;
	}



	return 0;
}
