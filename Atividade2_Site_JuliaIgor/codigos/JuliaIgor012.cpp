/*****************************************************
 Atividade 2 - 1DS3 - Programacao e Algoritmos
 Dupla: JULIA / IGOR
 Exercicio 12 - Dois vetores reais (digitado e automatico)
*****************************************************/
#include <iostream>
using namespace std;

int main() {
    double julia[20];   // vetor digitado
    double igor[20];    // vetor preenchido automaticamente

    cout << "Digite 20 numeros reais:" << endl;
    for (int i = 0; i < 20; i++) {
        cout << "Posicao " << i << ": ";
        cin >> julia[i];
    }

    // regra baseada na posicao zero do vetor digitado
    for (int i = 0; i < 20; i++) {
        if (julia[0] == 0)
            igor[i] = julia[i];          // copia identica
        else if (julia[0] > 0)
            igor[i] = julia[i] * 0.5;    // metade
        else
            igor[i] = julia[i] / 0.1;    // dividido por 0,1
    }

    cout << "\nVetor automatico (igor):" << endl;
    for (int i = 0; i < 20; i++) {
        cout << igor[i] << " ";
    }
    cout << endl;

    return 0;
}
