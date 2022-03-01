/*
 Ler uma matriz A (N x N) de números inteiros, onde N deve ser lido no início do programa, gerar um vetor B com N elementos que contenha a média de cada linha (números reais) da matriz A na respectiva posição do vetor B e apresentar a matriz A e o vetor B.

Exemplo: N=3

A               B
2  5  2        3    // (2+5+2)/3 = 3
1  4  7        4
8  7  6        7
 */

#include <iostream>
#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>

using namespace std;
int main()
{
	setlocale(LC_ALL, "portuguese");

	int n = 0, i1 = 0, i2 = 0;
	cout << "Informe o valor de N: " << endl;
	cin >> n;

	float vetorB[n];
	float soma[n];
	int arr[n][n];

	// 5
	// int arr[5][5];

	// int x[3][4] = {{0,1,2,3}, {4,5,6,7}, {8,9,10,11}};

	// Sensor >>> n numeros
	//
	//|00,01,02,03|
	//|04,05,06,07|
	//|08,09,10,11|

	//  Linha x Coluna
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << "\nDigite o valor da posicao [" << i << "][" << j << "]= ";
			cin >> arr[i][j]; // 12 / 13 ...
		}
	}

	for (int i = 0; i < n; i++) {
		cout << "\n";
		cout << "|";
		for (int j = 0; j < n; j++) {
			cout << " " << arr[i][j] << " |";
		}
	}

	// Somando matriz
	for (int i = 0; i < n; i++) {
			soma[i] = 0;
		for (int j = 0; j < n; j++) {
			// soma = arr[i][j] + soma;
			soma[i] += arr[i][j];
		}
	}
	// C = N, L = N;
	cout << "\n";
	for (int i = 0; i < n; i++) {
		cout << "Soma: " << soma[i] << endl;
		vetorB[i] = soma[i] / n;
		cout <<"Média: " <<vetorB[i] << endl;
	}
	cout << "-----------------"<< endl;
	cout << "Array\tSoma \tMédia"<< endl;
	for (int i = 0; i < n; i++) {
		cout << "\n";
		cout << "|";
		for (int j = 0; j < n; j++) {
			cout << "" << arr[i][j] << " ";
		}
			cout << "| "<< soma[i]<< " | " << soma[i]/n;
	} 


	return 0;
}
/*
	j coluna
i|	0  1  2
0	|12|13|14|
	-----------
1	|12|11|10|
	-----------
2	|09|04|02|
3	|09|04|02|
4	|09|04|02|
5	|09|04|02|
6	|09|04|02|
7	|09|04|02|



*/
