/*3 - Elabore um programa que possibilite a realiza��o dos seguintes c�lculos:
1 � Potencia��o (entrada dois valores inteiros e positivos)
2 � Raiz quadrada (entrada um valor inteiro e positivo)
3 - Arredondar o valor seguindo o crit�rio da primeira casa decimal e mostrar na tela
(entrada um valor float)
4 � Verificar se um valor � primo ou n�o (entrada um valor inteiro positivo)
5 � Verificar se um valor � um n�mero perfeito ou n�o (entrada um valor inteiro positivo).
O sistema dever� apresentar um menu com as op��es e conforme a op��o desejada ser�
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
        cout << "## MENU DE OPERA��ES ##\n1 � Pot�ncia\n2 � Raiz quadrada\n3 � Arredondamento para a primeira casa decimal\n4 � Verificar se um n�mero � primo\n5 � Verificar se um n�mero � perfeito\n\nDigite o n�mero da opera��o desejada: ";
        cin >> opcao;
        system("cls");

        if(opcao == '1')
        {
            cout << "Informe a base (n�mero inteiro e positivo): ";
            cin >> base;

            cout << "Informe o expoente (n�mero inteiro e positivo): ";
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
            cout << "Informe o n�mero (inteiro e positivo): ";
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
                cout << "Resultado: " << base << " � um n�mero primo!";
            else
                cout << "Resultado: " << base << " n�o � um n�mero primo!";
            contagem = 0;
        }
        else if(opcao == '5')
        {
            cout << "Informe o n�mero (inteiro e positivo): ";
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
                cout << "Resultado: " << base << " � um n�mero perfeito!";
            else
                cout << "Resultado: " << base << " n�o � um n�mero perfeito!";
            somaDivisores = 0;
        }

        cout << "\n\n1 - Realizar outra opera��o\n2 - Sair do programa" << endl;
        cin >> sair;
        system("cls");

    } while (sair == 1);

    return 0;
}
