/*****************************************************
 Atividade 2 - 1DS3 - Programacao e Algoritmos
 Dupla: JULIA / IGOR
 Exercicio 14 - Procurar dado num vetor de 10 reais
*****************************************************/
#include <iostream>
using namespace std;

int main() {
    double julia[10];   // vetor digitado
    double igor;        // numero procurado
    bool achou = false;

    cout << "Digite 10 numeros reais:" << endl;
    for (int i = 0; i < 10; i++) {
        cout << "Posicao " << i << ": ";
        cin >> julia[i];
    }

    cout << "Digite o numero a procurar: ";
    cin >> igor;

    for (int i = 0; i < 10; i++) {
        if (julia[i] == igor) {
            cout << "Encontrado na posicao (indice) " << i << endl;
            achou = true;
        }
    }

    if (!achou)
        cout << "Numero digitado nao pertence ao vetor" << endl;

    return 0;
}
