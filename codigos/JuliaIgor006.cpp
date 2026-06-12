/*****************************************************
 Atividade 2 - 1DS3 - Programacao e Algoritmos
 Dupla: JULIA / IGOR
 Exercicio 6 - Padrao avancado com caracteres
 Para N=5: 5 a 1 asteriscos descendo e 2 a 5 subindo
*****************************************************/
#include <iostream>
using namespace std;

int main() {
    int julia;   // valor de N
    int igor;    // quantidade de asteriscos por linha

    cout << "Digite N: ";
    cin >> julia;

    cout << endl;
    // parte que desce: N ate 1
    for (igor = julia; igor >= 1; igor--) {
        for (int j = 1; j <= igor; j++)
            cout << "*";
        cout << endl;
    }
    // parte que sobe: 2 ate N
    for (igor = 2; igor <= julia; igor++) {
        for (int j = 1; j <= igor; j++)
            cout << "*";
        cout << endl;
    }

    return 0;
}
