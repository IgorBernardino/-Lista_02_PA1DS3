/*****************************************************
 Atividade 2 - 1DS3 - Programacao e Algoritmos
 Dupla: JULIA / IGOR
 Exercicio 16 - Matriz 5x5 horizontal OU vertical (escolha)
*****************************************************/
#include <iostream>
using namespace std;

int main() {
    int julia[5][5];   // matriz
    int igor;          // opcao do usuario
    int contador = 1;

    cout << "Escolha o preenchimento:" << endl;
    cout << "1 - Horizontal" << endl;
    cout << "2 - Vertical" << endl;
    cout << "Opcao: ";
    cin >> igor;

    if (igor == 1) {
        for (int i = 0; i < 5; i++)
            for (int j = 0; j < 5; j++)
                julia[i][j] = contador++;
    } else {
        for (int j = 0; j < 5; j++)
            for (int i = 0; i < 5; i++)
                julia[i][j] = contador++;
    }

    cout << "\nMatriz 5x5:" << endl;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++)
            cout << julia[i][j] << "\t";
        cout << endl;
    }

    return 0;
}
