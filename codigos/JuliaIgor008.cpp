/*****************************************************
 Atividade 2 - 1DS3 - Programacao e Algoritmos
 Dupla: JULIA / IGOR
 Exercicio 8 - Sequencia de Collatz
*****************************************************/
#include <iostream>
using namespace std;

int main() {
    int julia;        // numero inicial
    int igor = 0;     // contador de passos

    cout << "Digite um numero inteiro positivo: ";
    cin >> julia;

    cout << endl << julia << endl;
    while (julia != 1) {
        if (julia % 2 == 0)
            julia = julia / 2;     // par
        else
            julia = julia * 3 + 1; // impar
        cout << julia << endl;
        igor++;
    }

    cout << "Passos = " << igor << endl;

    return 0;
}
