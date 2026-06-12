/*****************************************************
 Atividade 2 - 1DS3 - Programacao e Algoritmos
 Dupla: JULIA / IGOR
 Exercicio 18 - Matriz 5x5 a partir do numero central
 (crescente a direita, decrescente a esquerda)
*****************************************************/
#include <iostream>
using namespace std;

int main() {
    int julia[5][5];   // matriz
    int igor;          // numero do centro

    cout << "Digite o numero do centro da matriz 5x5: ";
    cin >> igor;

    // centro = [2][2]. Cada posicao varia conforme o indice linear.
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            int posicao = i * 5 + j;   // 0..24
            julia[i][j] = igor + (posicao - 12);
        }
    }

    cout << "\nMatriz 5x5:" << endl;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++)
            cout << julia[i][j] << "\t";
        cout << endl;
    }

    return 0;
}
