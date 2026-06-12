/*****************************************************
 Atividade 2 - 1DS3 - Programacao e Algoritmos
 Dupla: JULIA / IGOR
 Exercicio 17 - Matriz 4x4 lida pelo usuario (somente >= 1)
*****************************************************/
#include <iostream>
using namespace std;

int main() {
    int julia[4][4];   // matriz digitada
    int igor;          // valor lido temporariamente

    cout << "Preencha a matriz 4x4 (apenas numeros maiores ou iguais a 1):" << endl;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            do {
                cout << "Elemento [" << i << "][" << j << "]: ";
                cin >> igor;
            } while (igor < 1);   // nao aceita menores que 1
            julia[i][j] = igor;
        }
    }

    cout << "\nMatriz digitada:" << endl;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++)
            cout << julia[i][j] << "\t";
        cout << endl;
    }

    return 0;
}
