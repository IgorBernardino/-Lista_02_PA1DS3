/*****************************************************
 Atividade 2 - 1DS3 - Programacao e Algoritmos
 Dupla: JULIA / IGOR
 Exercicio 13 - Dois vetores inteiros (50 posicoes)
 vetor 1: 1..50   vetor 2: 50..1
*****************************************************/
#include <iostream>
using namespace std;

int main() {
    int julia[50];   // 1, 2, 3, ... 50
    int igor[50];    // 50, 49, ... 1

    // 1a estrutura: preenchimento
    for (int i = 0; i < 50; i++) {
        julia[i] = i + 1;
        igor[i]  = 50 - i;
    }

    // 2a estrutura: exibe o primeiro vetor
    cout << "Vetor 1 (crescente):" << endl;
    for (int i = 0; i < 50; i++)
        cout << julia[i] << " ";
    cout << endl;

    // 3a estrutura: exibe o segundo vetor
    cout << "\nVetor 2 (decrescente):" << endl;
    for (int i = 0; i < 50; i++)
        cout << igor[i] << " ";
    cout << endl;

    return 0;
}
