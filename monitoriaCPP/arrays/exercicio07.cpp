#include <iostream>
#include <vector>
using namespace std;


/* Leia um vetor de N posições de números inteiros e positivos, onde N deve ser lido no início do programa.
Nota: aplicar validação para não aceitar números negativos.
Faça:
- Contar e mostrar quantos valores pares ele possui e, na sequência, mostra-los;
- Calcular e mostrar a média de todos os números armazenados; e
- Apresentar o maior número. */

int main(int argc, char** argv) 


{
	setlocale(LC_ALL, "portuguese");
	
	int N=0, maior=0;
	float media=0.0, soma=0.0;
	cout << "Informe o número de posições: " <<endl;
	cin >> N;
	
	int vetor[N];
	for (int i=0; i < N; i++)
	{
		cout << "Digite o número: " <<endl;
		cin >> vetor [i];
		if (vetor[i]<0)
		{
			cout << "Valor inválido, somente números positivos: " <<endl;
			cin >> vetor[i];			
		}
	}
	
	//gerando vetor de números pares
	vector<int> vetor_pares ;
	for (int i=0; i < N; i++)
	{
		//mostrar vetor
		cout << vetor [i] << " ";
		//pegando o maior número
		if (maior < vetor [i]) 
		{
			maior = vetor [i];
		}
		//pegando números pares
		if (vetor[i] % 2 ==0)
		{
			vetor_pares.push_back(vetor [i]);
		}
		//somando 1º vetor
		//soma = soma + vetor[i]
		soma += vetor[i];	
	}
	// mostrar total de posições no vetor_pares
	//size() retorna o tamanho do meu vetor
	cout << "\nTotal de números pares: " << vetor_pares.size() <<endl;
	
	//mostrar valores pares
	cout << "Vetor gerado de números pares: ";
	for (int i=0; i < vetor_pares.size(); i++)
	{
		cout << vetor_pares [i] << " ";
	}
	//apresentando a média
	media = soma / N;
	cout << "\nA média do vetor: " << media <<"";
	//apresentar maior número
	cout << "\nO maior valor: " << maior << endl;
	
	return 0;
}
