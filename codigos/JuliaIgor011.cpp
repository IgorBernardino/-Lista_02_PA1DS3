/*****************************************************
 Atividade 2 - 1DS3 - Programacao e Algoritmos
 Dupla: JULIA / IGOR
 Exercicio 11 - Vetor de 16 posicoes com Fibonacci
 (sem digitacao - preenchimento automatico)
*****************************************************/
#include <iostream>
using namespace std;

int main() {
    int julia[16];   // vetor que recebe a sequencia
    int igor;        // indice de controle

    julia[0] = 0;
    julia[1] = 1;
    for (igor = 2; igor < 16; igor++) {
        julia[igor] = julia[igor - 1] + julia[igor - 2];
    }

    cout << "Sequencia de Fibonacci (16 elementos):" << endl;
    for (igor = 0; igor < 16; igor++) {
        cout << julia[igor] << " ";
    }
    cout << endl;

    return 0;
}
