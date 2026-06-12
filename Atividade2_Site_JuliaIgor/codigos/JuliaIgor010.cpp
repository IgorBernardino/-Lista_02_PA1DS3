/*****************************************************
 Atividade 2 - 1DS3 - Programacao e Algoritmos
 Dupla: JULIA / IGOR
 Exercicio 10 - Triangulo de Floyd
*****************************************************/
#include <iostream>
using namespace std;

int main() {
    int julia;        // quantidade de linhas
    int igor = 1;     // contador sequencial

    cout << "Digite a quantidade de linhas: ";
    cin >> julia;

    cout << endl;
    for (int linha = 1; linha <= julia; linha++) {
        for (int coluna = 1; coluna <= linha; coluna++) {
            cout << igor << " ";
            igor++;
        }
        cout << endl;
    }

    return 0;
}
