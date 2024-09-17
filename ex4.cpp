/*4 - Crie um programa que manipule um vetor V[10] que deve ser preenchido randomicamente
com valores inteiros entre 15 e 50, sem números repetidos.
Após gerar o vetor o programa deverá:
- Exibir o vetor na tela
- Exibir o vetor em ordem crescente
- Exibir o percentual de valores pares e o percentual de valores ímpares no vetor
- Exibir a média dos valores do vetor com duas casas decimais. */

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

    cout << "\n\nPorcentagem de números Ímpares: " << percentImpar << "%";
    cout << "\n\nPorcentagem de números Pares: " << percentPar << "%";
    cout << "\n\nA soma total é: " << soma;
    cout << "\n\nA média é: " << media;

    return 0;
}


