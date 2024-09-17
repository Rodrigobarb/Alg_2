/*1 – Escreva um programa que simule um caixa eletrônico que dispõem das seguintes notas: 2,
5, 10, 20, 50, 100 e 200 o programa deverá receber o valor do saque e, sendo possível realizar
o saque, deverá apresentar a quantidade e quais notas devem ser entregues, sempre
priorizando as notas maiores.
Não é permitido saque de valores menores que 2 e igual a 3, exibir mensagem com esta
informação, os demais valores é possível realizar o saque:
Exemplo:
Valor do saque R$: 11.00
Retire seu dinheiro:
3 notas de 2
1 nota de 5
*/

#include <iostream>
#include <ctime>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    setlocale(LC_ALL, "portuguese");

    int cedulas[6] = {100, 50, 20, 10, 5, 2};
    int valor, qtd[6] = {};
    bool testeErro;

    do
    {
        testeErro = false;

        cout << "Informe o valor a ser sacado: ";
        cin >> valor;
        fflush(stdin);

        if(valor == 0)
        {
            cout << "\nERRO: O valor não pode ser 0.\n";
            getchar();
            system("cls");
            testeErro = true;
        }
        else if(valor == 3 || valor == 1)
        {
            cout << "\nERRO: Insira um valor maior que 1 e diferente de 3.\n";
            getchar();
            system("cls");
            testeErro = true;
        }
        else
        {
            int i = 0;
            while(valor > 0)
            {
                int res = 0;

                res = valor / cedulas[i];

                if(res > 0)
                {
                    valor -= cedulas[i];
                    qtd[i]++;
                    if(valor < 5)
                    {
                        if(valor % 2 == 0)
                        {
                            while(valor > 0)
                            {
                                qtd[5]++;
                                valor -= cedulas[5];
                            }
                            break;
                        }
                        else
                        {
                            valor += cedulas[i];
                            qtd[i]--;
                            i++;
                        }
                    }
                }
                else
                    i++;
            }

            cout << "\nSaque " << valor << ",00: ";
            for(int i = 0; i < 6; i++)
            {
                if(qtd[i] > 0)
                {
                    cout << qtd[i] << " NOTA(S) DE " << cedulas[i] << ", ";
                }
            }
            cout << "\n";
        }
    }
    while(testeErro == true);
}


