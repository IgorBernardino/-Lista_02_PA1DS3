/*****************************************************
 Atividade 2 - 1DS3 - Programacao e Algoritmos
 Dupla: JULIA / IGOR
 Exercicio 15 - Matriz 5x5 preenchida horizontalmente (1 a 25)
*****************************************************/
#include <iostream>
using namespace std;

int main() {
    int julia[5][5];   // matriz
    int igor = 1;      // contador de 1 a 25

    // preenchimento horizontal
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            julia[i][j] = igor;
            igor++;
        }
    }

    cout << "Matriz 5x5 (horizontal):" << endl;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cout << julia[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}
