/*Leia um vetor de N posições de números inteiros e positivos, onde N deve lido no início do programa.
Nota: aplicar validação para não aceitar números negativos.
Faça:
- Contar e mostrar quantos valores pares ele possui e, na sequência, mostra-los;
- Calcular e mostrar a média de todos os números armazenados; e
- Apresentar o maior número.*/

#include <iostream>
#include <stdio.h>

using namespace std;
int main()
{
	setlocale(LC_ALL, "portuguese");
	// Variaveis
	int n = 0;
	int x = 0;
	float media = 0.0;
	int maior = 0, menor = 0;

	// Usuário informa o total a ser preenchido no vetor
	cout << "Informe a quantidade de números a cadastras: " << endl;
	cin >> n;

	// Criação do vetor
	int arr[n];

	// Recebe valor do usuário
	for (int i = 0; i < n; i++) {
		cout << "Digite um número: " << endl;
		cin >> x;
		if (x < 0) {
			cout << "valor invalido, tente de novo: " << endl;
			cin >> x;
		}
		arr[i] = x;
		//  0    1    2    3
		//[10,   6,   7,   7]
	}

	// Mostrar vetor gerado
	cout << "----------------" << endl;
	for (int i = 0; i < n; i++) {
		// Verifica maior valor inserido no vetor
		if (arr[i] > maior) {
			maior = arr[i];
			menor = arr[i];
		}
		if (arr[i] < menor) {
			menor = arr[i];
		}
		cout << i << " - " << arr[i] << endl;
		media += arr[i];
	}
	cout << "Maior: " << maior << endl;
	cout << "Menor: " << menor << endl;
	cout << "Média: " << media / n << endl;
	return 0;
}
