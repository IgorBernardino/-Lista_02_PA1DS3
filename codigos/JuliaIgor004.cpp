/*****************************************************
 Atividade 2 - 1DS3 - Programacao e Algoritmos
 Dupla: JULIA / IGOR
 Exercicio 4 - Contagem de numeros primos em intervalo
*****************************************************/
#include <iostream>
using namespace std;

int main() {
    int julia;        // limite A
    int igor;         // limite B
    int total = 0;    // quantidade de primos

    cout << "Digite A: ";
    cin >> julia;
    cout << "Digite B: ";
    cin >> igor;

    if (julia <= igor) {     // se A > B nao faz nada
        cout << "\nNumeros primos no intervalo:" << endl;
        for (int n = julia; n <= igor; n++) {
            int divisores = 0;
            for (int i = 1; i <= n; i++) {
                if (n % i == 0)
                    divisores++;
            }
            if (n > 1 && divisores == 2) {
                cout << n << " ";
                total++;
            }
        }
        cout << "\n\nQuantidade total de primos: " << total << endl;
    }

    return 0;
}
