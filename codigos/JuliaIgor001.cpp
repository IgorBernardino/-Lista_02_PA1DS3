/*****************************************************
 Atividade 2 - 1DS3 - Programacao e Algoritmos
 Dupla: JULIA / IGOR
 Exercicio 1 - Soma de numeros validos
*****************************************************/
#include <iostream>
using namespace std;

int main() {
    int julia;          // numero digitado
    double igor = 0;    // soma dos positivos
    int contador = 0;   // quantidade de numeros validos

    cout << "Digite numeros inteiros positivos (negativo encerra):" << endl;
    cin >> julia;

    while (julia >= 0) {
        if (julia > 0) {     // ignora os zeros
            igor += julia;
            contador++;
        }
        cin >> julia;
    }

    cout << "\nSoma total: " << igor << endl;
    cout << "Quantidade de numeros validos: " << contador << endl;
    if (contador > 0)
        cout << "Media dos valores validos: " << igor / contador << endl;
    else
        cout << "Nenhum numero valido digitado." << endl;

    return 0;
}
