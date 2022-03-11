/*Desenvolva um pequeno sistema para cálculo de figuras geométricas planas - cálculo da área e do perímetro.
As opções devem ser: Quadrado, Triângulo e Circunferência.
O menu de opções pode ter o seguinte layout :

GEOMETRIA PLANA
MENU PRINCIPAL:
1- QUADRADO
2- TRIÂNGULO
3- CIRCUNFERÊNCIA
4- SAIR
OPÇÃO => _

Caso a opção do programa seja a 1, 2 ou 3, deverá chamar um procedimento (void) para ler e calcular área e perímetro da figura em questão.
Caso a opção do programa seja a opção 4, emitir a mensagem "O programa será finalizado!" e finalizar.
(Opcional) Caso a opção seja diferente de uma delas, emitir a mensagem "Opção incorreta!!!" e reapresentar o menu principal.
Então, vc devera ter o programa principal (que é o main) e 3 subprogramas (SEM parâmetros e SEM retorno)

Abaixo um exemplo do void quadrado() que vc pode aproveitar:

void quadrado()
{
    int lado, area;
    system("cls");
    cout<<"CÁLCULO DO QUADRADO"<<endl<<endl;
    cout<<"Digite o lado do quadrado: "; cin>>lado;
    area = lado * lado;
    cout<<"A área do quadrado é "<<area<<endl<<endl;
    cout<<"Aperte qualquer para voltar ao menu principal"<<endl;
    system("pause");
}*/

#include <cstdlib>
#include <iostream>
#include <math.h>
#include <stdlib.h>
// sqrt() raiz
// pow() potencia

using namespace std;

// Funções
void quadrado();
void triangulo();
void circu();
void menu();
void soma();

int main()
{

    menu();
    return 0;
}

void menu()
{
    char op;
    while (op != '5') {
        system("clear");
        cout << "GEOMETRIA PLANA" << endl;
        cout << "MENU PRINCIPAL:" << endl;
        cout << "1- QUADRADO" << endl;
        cout << "2- TRIÂNGULO" << endl;
        cout << "3- CIRCUNFERÊNCIA" << endl;
        cout << "4- SOMA " << endl;
        cout << "5- SAIR " << endl;
        cout << "OPÇÃO =>  ";
        cin >> op;

        switch (op) {
            case '1':
                quadrado();
                break;
            case '2':
                triangulo();
                break;
            case '3':
                circu();
                break;
            case '4':
                soma();
                break;
            case '5':
                cout << "Programa Encerrado!"<<endl;
                break;
            default:
                cout << "Valor não encontrado!" << endl;
                cout << "Aperte qualquer para voltar ao menu principal" << endl;
                getchar();
                cin.get();
                break;
        }
    }
}
void soma()
{
    cout << "somei " << endl;
    getchar();
    cin.get();
}

void quadrado()
{
    int lado, area;
    system("clear");
    cout << "CÁLCULO DO QUADRADO" << endl
         << endl;
    cout << "Digite o lado do quadrado: ";
    cin >> lado;
    area = lado * lado;
    cout << "A área do quadrado é " << area << endl
         << endl;
    cout << "Aperte ENTER para voltar ao menu principal" << endl;
    cin.get();
    getchar();
}
void triangulo()
{
    // A = (b*h)/2

    double base, altura, area;

    system("clear");
    cout << "CÁLCULO DO TRIÂNGULO" << endl;
    cout << "\nDigite a base: ";
    cin >> base;
    cout << "Digite a altura: ";
    cin >> altura;
    area = (base * altura) / 2;
    cout << "\nA área do triângulo é de: " << area << " cm²" << endl;
    cout << "Aperte ENTER para voltar ao menu principal" << endl;

    cin.get();
    getchar();
}
void circu()
{
    double c, d, pi = 3.14, raio;

    system("clear");
    cout << "CÁLCULO DO CIRCUNFERÊNCIA" << endl
         << endl;
    cout << "Digite o diâmetro: ";
    cin >> d;
    // C = ?
    // C = 2*R*pi
    //
    raio = d / 2;
    c = 2 * pi * raio;

    cout << "A circunferência: " << c << endl;
    cout << "Aperte qualquer para voltar ao menu principal" << endl;
    cin.get();
    getchar();
}
