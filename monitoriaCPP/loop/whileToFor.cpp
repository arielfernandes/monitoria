/*Reescreva o trecho de código abaixo utilizando a estrutura de repetição FOR:
*/
#include <iostream>
using namespace std;


int main() {
    // 1ºparte => int x = 1; 2º parte => x <= 10;  3º parte => x++;
    /*
        x = x + 1
        x == 2;
        x = x + 1
        x == 3;
        ...
        x == 10;
        sai do loop
     */
    //for(condicao) {
        // interacao;
    //}
    //for(1º parte=> int x = 1; 2º parte => x <= 10; 3º parte => x++) {
    //}

    for(int x = 1; x <= 10; x++) {
        cout << x << "\t";
    }
//LOOP
//while(condicoes para existir);
//for(condiecoes para existir);

/*
    int x = 1;
    while(x<=10){
        cout << x << "\t";
        x++;
    }
    //////////////////////////////////////////
    while(x<=10 || opcao != "sair" || true){
        cout << x << "\t";
        //deseja sair? cin >> op == 'sim' op=sair;
        x++;
    }
*/
    return 0;
}
