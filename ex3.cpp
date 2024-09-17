/*3 - Elabore um programa que possibilite a realização dos seguintes cálculos:
1 – Potenciação (entrada dois valores inteiros e positivos)
2 – Raiz quadrada (entrada um valor inteiro e positivo)
3 - Arredondar o valor seguindo o critério da primeira casa decimal e mostrar na tela
(entrada um valor float)
4 – Verificar se um valor é primo ou não (entrada um valor inteiro positivo)
5 – Verificar se um valor é um número perfeito ou não (entrada um valor inteiro positivo).
O sistema deverá apresentar um menu com as opções e conforme a opção desejada será
solicitado os dados de entrada.*/

#include <iostream>
#include <ctime>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    setlocale(LC_ALL, "portuguese");

    int base, expoente, sair, contagem=0, somaDivisores=0;
    float valorDecimal;
    char opcao;

    do {
        cout << "## MENU DE OPERAÇÕES ##\n1 – Potência\n2 – Raiz quadrada\n3 – Arredondamento para a primeira casa decimal\n4 – Verificar se um número é primo\n5 – Verificar se um número é perfeito\n\nDigite o número da operação desejada: ";
        cin >> opcao;
        system("cls");

        if(opcao == '1')
        {
            cout << "Informe a base (número inteiro e positivo): ";
            cin >> base;

            cout << "Informe o expoente (número inteiro e positivo): ";
            cin >> expoente;

            system("cls");

            cout << "Resultado: " << pow(base, expoente);
        }
        else if(opcao == '2')
        {
            cout << "Informe um valor inteiro positivo: ";
            cin >> base;

            system("cls");

            cout << "Resultado: " << sqrt(base);
        }
        else if(opcao == '3')
        {
            cout << "Informe o valor decimal que deseja arredondar: ";
            cin >> valorDecimal;

            system("cls");

            cout << "Resultado: " << round(valorDecimal);
        }
        else if(opcao == '4')
        {
            cout << "Informe o número (inteiro e positivo): ";
            cin >> base;

            system("cls");

            for(int i = 1; i <= base; i++)
            {
                if(base % i == 0)
                {
                    contagem++;
                }
            }

            if(contagem == 2)
                cout << "Resultado: " << base << " é um número primo!";
            else
                cout << "Resultado: " << base << " não é um número primo!";
            contagem = 0;
        }
        else if(opcao == '5')
        {
            cout << "Informe o número (inteiro e positivo): ";
            cin >> base;

            system("cls");

            for(int i = 1; i < base; i++)
            {
                if(base % i == 0)
                {
                    somaDivisores += i;
                }
            }

            if(somaDivisores == base)
                cout << "Resultado: " << base << " é um número perfeito!";
            else
                cout << "Resultado: " << base << " não é um número perfeito!";
            somaDivisores = 0;
        }

        cout << "\n\n1 - Realizar outra operação\n2 - Sair do programa" << endl;
        cin >> sair;
        system("cls");

    } while (sair == 1);

    return 0;
}
