#include <iostream>
#include <stdio.h>

using namespace std;
int main()
{
	// 	//Gerar um vetor de n posicoes
	// 	//int vetor[10] ->> ERRADO
	// 	//int vetor[n] ->> CERTO
	// 	int n = 0, numero=0;
	// 	// se o usuário informar 4 posições; n = 4;
	// 	cout << "Infome o tamanho do vetor: " <<endl;
	// 	cin >> n;
	//
	// 	// [0,1,2,3]
	// 	int vetor[n];
	//
	// 	//Inserindo valores no vetor
	// 	for(int i = 0; i < n; i++) { //abre
	// 		cout << "Informe um valor: "<<endl;
	// 		cin >> numero;
	//
	// 		if(numero < 0 || numero > 10){
	// 			cout << "Erro, valor invalido: "<<endl;
	// 			cin >> numero;
	// 			//Armazenando valor que o usuário informou dentro do meu vetor
	// 			vetor[i] = numero;
	// 		}
	// 		//Armazenando valor que o usuário informou dentro do meu vetor
	// 		vetor[i] = numero;
	// 	}//fecha
	//
	// 	//Mostrar os valores inseridos dentro do vetor
	// 	//usar o loop for para pegar e mostrar os valores
	// 	//vetor[5, 2, 9, 0]
	// 	//Contagem é sempre do zero (indice) -> 0, 1, 2, 3, ...
	// 	//                            valor  -> 5, 2, 9, 0, ...
	// 	cout << "----------------" <<endl;
	// 	for(int i = 0; i < n; i++) {
	// 		cout << i << " -> "<< vetor[i] <<endl;
	// 	}

// 	cout << "----------------" << endl;
// 	// declare and initialize an array
// 	int x[] = { 19, 10, 8, 17, 9, 15 };
// 
// 	// Pega o tamanho do vetor
// 	int tamanho_vetor = sizeof(x) / sizeof(int);
// 	cout << "Tamano do vetor: " << tamanho_vetor << endl;
// 	for (int i = 0; i < tamanho_vetor; i++) {
// 		cout << x[i] << endl;
// 	}
// 
// 	cout << "----------------" << endl;
// 	// store only 3 elements in the array
// 	int f[6] = { 19, 10, 8 };
// 	for (int i = 0; i < 6; i++) {
// 		cout << f[i] << endl;
		int v=0;
    int numbers[v];

    cout << "Informe o tamanho do vetor: " << endl;
		cin >> v;
    cout << "Entre com " << v <<" numeros: " << endl;

    //  store input from user to array
    for (int i = 0; i < v; ++i) {
        cin >> numbers[i];
    }

    cout << "Os numeros sao: ";

    //  print array elements
    for (int n = 0; n < v; ++n) {
        cout << numbers[n] << "  ";
    }
	return 0;
}
