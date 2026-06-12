/*****************************************************
 Atividade 2 - 1DS3 - Programacao e Algoritmos
 Dupla: JULIA / IGOR
 Exercicio 5 - Aproximacao de PI
 Pi = 4 * (1 - 1/3 + 1/5 - 1/7 + ...)
*****************************************************/
#include <iostream>
using namespace std;

int main() {
    int julia;            // quantidade de termos
    double igor = 0;      // soma da serie
    int sinal = 1;        // alterna +1 e -1
    int denominador = 1;

    cout << "Digite a quantidade de termos da serie: ";
    cin >> julia;

    for (int i = 0; i < julia; i++) {
        igor += (double)sinal / denominador;
        sinal = -sinal;
        denominador += 2;
    }

    double pi = 4 * igor;
    cout << "\nValor aproximado de PI: " << pi << endl;

    return 0;
}
