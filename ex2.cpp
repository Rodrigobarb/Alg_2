/*2 – Escreva um programa que manipule um vetor VET[20] de números float, os valores para
preencher o vetor devem ser gerados randomicamente, mostre o vetor gerado na tela, exibindo
5 valores em cada linha e separando cada valor com uma vírgula, a seguir mostre o vetor com
valores arredondados para cima, para baixo e seguindo o critério da primeira casa decimal, após
truncar (considerar somente a parte inteira) todos os valores do vetor e apresentar a soma dos
valores truncados.*/

#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime> )

using namespace std;

int main() {
    float VET[20];
    srand(time(NULL));

    for (int i = 0; i < 20; i++) {
        VET[i] = (rand() % 1000) / 10.0;
    }

    cout << "Vetor gerado (5 valores por linha):\n";
    cout << fixed;
    cout.precision(2);
    for (int i = 0; i < 20; i++) {
        cout << VET[i];
        if (i % 5 == 4) {
            cout << endl;
        } else {
            cout << ", ";
        }
    }

    cout << "\nVetor arredondado para cima (ceil):\n";
    for (int i = 0; i < 20; i++) {
        cout << ceil(VET[i]);
        if (i % 5 == 4) {
            cout << endl;
        } else {
            cout << ", ";
        }
    }

    cout << "\nVetor arredondado para baixo (floor):\n";
    for (int i = 0; i < 20; i++) {
        cout << floor(VET[i]);
        if (i % 5 == 4) {
            cout << endl;
        } else {
            cout << ", ";
        }
    }

    cout << "\nVetor arredondado pela primeira casa decimal:\n";
    for (int i = 0; i < 20; i++) {
        cout << round(VET[i]);
        if (i % 5 == 4) {
            cout << endl;
        } else {
            cout << ", ";
        }
    }

    float soma_truncados = 0;
    cout << "\nVetor truncado (somente a parte inteira):\n";
    for (int i = 0; i < 20; i++) {
        cout << trunc(VET[i]);
        soma_truncados += trunc(VET[i]);
        if (i % 5 == 4) {
            cout << endl;
        } else {
            cout << ", ";
        }
    }

    cout << "\nSoma dos valores truncados: " << soma_truncados << endl;

    return 0;
}
