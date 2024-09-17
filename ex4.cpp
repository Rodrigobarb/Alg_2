/*4 - Crie um programa que manipule um vetor V[10] que deve ser preenchido randomicamente
com valores inteiros entre 15 e 50, sem n�meros repetidos.
Ap�s gerar o vetor o programa dever�:
- Exibir o vetor na tela
- Exibir o vetor em ordem crescente
- Exibir o percentual de valores pares e o percentual de valores �mpares no vetor
- Exibir a m�dia dos valores do vetor com duas casas decimais. */

#include <iostream>
#include <ctime>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    setlocale(LC_ALL, "portuguese");

    const int tam = 10;
    int vet[tam], aux, contImpar = 0, contPar = 0, percentPar, percentImpar, soma = 0;
    float media;

    srand(time(NULL));

    for (int i = 0; i < tam; i++)
    {
        int v = rand() % 35 + 15;
        bool existe = false;
        for (int j = 0; j < i; j++)
        {
            if (vet[j] == v)
            {
                existe = true;
                break;
            }
        }
        if (existe)
        {
            i--;
        else
        {
            vet[i] = v;
        }
    }

    cout << "Vetor:";
    for (int i = 0; i < tam; i++)
    {
        cout << vet[i] << ", ";
    }
    for (int i = 0; i < tam; i++)
    {
        for (int j = i + 1; j < tam; j++)
        {
            if (vet[i] < vet[j])
            {
                aux = vet[i];
                vet[i] = vet[j];
                vet[j] = aux;
            }
        }
    }

    cout << endl << endl;
    cout << "Vetor em ordem decrescente: ";
    for (int i = 0; i < tam; i++)
    {
        cout << vet[i] << ", ";
    }

    for (int i = 0; i < tam; i++)
    {
        soma += vet[i];
        if (vet[i] % 2 == 0)
            contPar++;
        else
            contImpar++;
    }

    percentImpar = (contImpar * 100.0) / tam;
    percentPar = (contPar * 100.0) / tam;

    media = soma / static_cast<float>(tam);

    cout << "\n\nPorcentagem de n�meros �mpares: " << percentImpar << "%";
    cout << "\n\nPorcentagem de n�meros Pares: " << percentPar << "%";
    cout << "\n\nA soma total �: " << soma;
    cout << "\n\nA m�dia �: " << media;

    return 0;
}


