/*
 * Faça um programa em C/C++ para receber aleatoriamente números inteiros
 * de 0 a 15 e armazená-los em uma matriz quadrada N x N, onde N deve ser
 * lido no início do programa.
Observação: Caso não consigas gerar os números de forma aleatória, podes
fazer com o comando de entrada - de preferência com a validação para receber
valores de 0 a 15.
O programa deverá mostrar a matriz lida e na sequência mostrar a matriz transposta.

Exemplo:

1  	2  	3  	    1  	4  	7
4	5	6	=>	2	5	8
7	8	9	 	3	6	9
*/
#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{


    int n;
    int num;
    // inicializar random
    srand(time(0));
    // variavel = rand() % (10 - 0 + 1);

    cout << "Informe o tamanho da matriz n x n: ";
    cin >> n;

    int vetor[n][n];
    //n = 3 ->> vetor[3][3]
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            vetor[i][j] = rand() % (15 - 0 + 1);
        }
    }
    for (int i = 0; i < n; i++) {
        cout << endl;
        for (int j = 0; j < n; j++) {
            cout << vetor[i][j] << "\t";
        }
    }
    int mTrans[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            mTrans[j][i]= vetor[i][j];
        }
    }
    cout << endl;
    cout << endl;
    for (int i = 0; i < n; i++) {
        cout << endl;
        for (int j = 0; j < n; j++) {
            cout << mTrans[i][j] << "\t";
        }
    }
    return 0;
}
