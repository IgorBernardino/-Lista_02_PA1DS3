/*****************************************************
 Atividade 2 - 1DS3 - Programacao e Algoritmos
 Dupla: JULIA / IGOR
 Exercicio 7 - Numero perfeito
*****************************************************/
#include <iostream>
using namespace std;

int main() {
    int julia;        // numero a ser testado
    int igor = 0;     // soma dos divisores proprios

    cout << "Digite um numero: ";
    cin >> julia;

    for (int i = 1; i < julia; i++) {
        if (julia % i == 0)
            igor += i;
    }

    if (igor == julia)
        cout << "O numero " << julia << " e PERFEITO." << endl;
    else
        cout << "O numero " << julia << " NAO e perfeito." << endl;

    return 0;
}
