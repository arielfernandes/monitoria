/*Faça um programa em C/C++ para ler o nome, a idade e o sexo (M/F) de N pessoas, onde N deve ser lido no início do programa.
Nota: o sexo deverá receber apenas M ou F.
Gere os seguintes relatórios:
- Geral (com todos os dados);
- Das mulheres;
- Dos homens;
- Das pessoas com idade >= 18;
Além disso apresente:
- O percentual de homens;
- O percentual de mulheres;
- A maior idade e o(s) respectivo(s) nome e idade;
- A menor idade e o(s) respectivo(s) nome e idade.
*/

#include <cctype>
#include <iostream>
#include <vector>

using namespace std;
int main()
{
    int n, maior = 0, menor = 0, p = 0;
    float contM = 0, contF = 0;
    int cont1, cont2;
    char sexo;
    cout << "Informe o numero de pessoas a cadastrar: ";
    cin >> n;
    int idade[n];
    string nome[n];
    string sexoVetor[n];

    for (int i = 0; i < n; ++i) {
        cout << "o nome: ";
        cin >> nome[i];
        cout << "o idade: ";
        cin >> idade[i];
        cout << "o sexo: ";
        cin >> sexoVetor[i];
        //Verificar sexo 
        //do while
        if(sexoVetor[i] != "F" && sexoVetor[i] != "M"){
            cout << "Erro Sexo, (M/F)";
            cin >> sexoVetor[i];
        }
    }
    // nome
    // [ 0 => joao, 1, 2, 3 ]
    // idade
    // [ 0 => 12, 1, 2, 3 ]
    // sexo
    // [ 0 = M, 1, 2, 3 ]
    /// Gerando Relatorio
    cout << "----------- Relatorio Geral ----------" << endl;
    for (int i = 0; i < n; i++) {
        cout << "\nNome: " << nome[i] << "\nidade: " << idade[i] << "\nSexo: " << sexoVetor[i] << endl;
        if (maior < idade[i]) {
            maior = idade[i];
            menor = idade[i];
//             cont2 = i;
        }
        if (menor > idade[i]) {
            menor = idade[i];
//             cont1 = i;
        }
    }
    cout << "--------- Relatorio Feminino ---------" << endl;
    /// Gerando Relatorio Mulher
    for (int i = 0; i < n; i++) {
        if (sexoVetor[i] == "F" || sexoVetor[i] == "f") {
            cout << "\nNome: " << nome[i] << "\nidade: " << idade[i] << "\nSexo: " << sexoVetor[i] << endl;
            contF++;
        }
    }
    cout << "------- Relatorio Masculino ----------" << endl;
    /// Gerando Relatorio Masculino
    for (int i = 0; i < n; i++) {
        if (sexoVetor[i] == "M" || sexoVetor[i] == "m") {
            cout << "\nNome: " << nome[i] << "\nidade: " << idade[i] << "\nSexo: " << sexoVetor[i] << endl;
            contM++;
        }
    }

    cout << "------- Relatorio Maiores de 18 -------" << endl;
    /// Gerando Relatorio Masculino
    for (int i = 0; i < n; i++) {
        if (idade[i] >= 18) {
            cout << "\nNome: " << nome[i] << "\nidade: " << idade[i] << "\nSexo: " << sexoVetor[i] << endl;
            p++;
        }
    }
    if(p == 0){
        cout << "\nNenhum usuario maior de idade" << endl;
    }
    cout << "------- Relatorio Maior e Menor -------" << endl;
    for (int i = 0; i < n; i++) {
        if (idade[i] == maior) {
            cout << "\nNome: " << nome[i] << "\nidade: " << idade[i] << "\nSexo: " << sexoVetor[i] << endl;
        }
        if (idade[i] == menor) {
            cout << "\nNome: " << nome[i] << "\nidade: " << idade[i] << "\nSexo: " << sexoVetor[i] << endl;
        }
    }
        
//     cout << "\nNome: " << nome[cont1] << "\nidade: " << idade[cont1] << "\nsexo: " << sexoVetor[cont1] << endl;
//     cout << "\nNome: " << nome[cont2] << "\nidade: " << idade[cont2] << "\nsexo: " << sexoVetor[cont2] << endl;

    cout << "-------- Percentual Feminino --------" << endl;
    cout << "Total de Mulheres: " << (contF / 100) * n << endl;
    cout << "Percentual Mulheres: " << (contF / 100) * n << endl;
    cout << "-------- Percentual Masculino --------" << endl;
    cout << "Total de Homens: " << (contM / 100) * n << endl;
    cout << "Percentual de Homens: " << (contM / 100) * n << endl;
    return 0;
}
