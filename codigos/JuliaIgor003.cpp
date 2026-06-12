/*****************************************************
 Atividade 2 - 1DS3 - Programacao e Algoritmos
 Dupla: JULIA / IGOR
 Exercicio 3 - Tabuleiro numerico triangular
*****************************************************/
#include <iostream>
using namespace std;

int main() {
    int julia;   // quantidade de linhas (N)
    int igor;    // numero impresso em cada coluna

    do {
        cout << "Digite N (entre 2 e 100): ";
        cin >> julia;
    } while (julia < 2 || julia > 100);

    cout << endl;
    for (int linha = 1; linha <= julia; linha++) {
        for (igor = 1; igor <= linha; igor++) {
            cout << igor<<",";
        }
        cout << endl;
    }

    return 0;
}
