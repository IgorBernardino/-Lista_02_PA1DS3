/*****************************************************
 Atividade 2 - 1DS3 - Programacao e Algoritmos
 Dupla: JULIA / IGOR
 Exercicio 9 - Conversao Decimal para Binario
*****************************************************/
#include <iostream>
using namespace std;

int main() {
    int julia;            // numero decimal
    int igor[32];         // vetor que guarda os bits
    int qtd = 0;

    cout << "Digite um numero decimal positivo: ";
    cin >> julia;

    int n = julia;
    if (n == 0)
        igor[qtd++] = 0;
    while (n > 0) {
        igor[qtd++] = n % 2;   // resto da divisao por 2
        n = n / 2;
    }

    cout << "Binario: ";
    for (int i = qtd - 1; i >= 0; i--)   // do ultimo para o primeiro
        cout << igor[i];
    cout << endl;

    return 0;
}
