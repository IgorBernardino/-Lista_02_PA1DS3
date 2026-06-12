/*****************************************************
 Atividade 2 - 1DS3 - Programacao e Algoritmos
 Dupla: JULIA / IGOR
 Exercicio 2 - Verificacao de numero primo
*****************************************************/
#include <iostream>
using namespace std;

int main() {
    int julia;            // numero a ser testado
    int igor = 0;         // contador de divisores

    cout << "Digite um numero inteiro positivo: ";
    cin >> julia;

    for (int i = 1; i <= julia; i++) {
        if (julia % i == 0)
            igor++;       // encontrou um divisor
    }

    if (julia > 1 && igor == 2)
        cout << "O numero " << julia << " e PRIMO." << endl;
    else
        cout << "O numero " << julia << " NAO e primo." << endl;

    return 0;
}
