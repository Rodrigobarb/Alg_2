/*6 – Escreva um programa que receba um texto qualquer do teclado, em seguida
apresente:
- O texto com todos os caracteres em maiúsculo
- O texto com todos os caracteres em minúsculo
- O Total de caracteres do texto
- O Total de vogais
- O Total de consoantes
- O Total de números
- O Total de espaços em branco*/

#include <iostream>
#include <ctime>
#include <iomanip>
#include <cmath>
#include <cstring>

using namespace std;

int main()
{
    setlocale(LC_ALL, "portuguese");

    string vogais("aeiouAEIOU");
    string text;
    int espacos = 0, consoantes = 0, numeros = 0, vogalCont = 0;


    cout << "Digite um texto: ";
    getline(cin, text);

    for(int i = 0; i <= text.size(); i++)
    {
        text[i] = toupper(text[i]);
    }
    cout << "Texto em maísuculo: " <<text << endl;

    for (int i = 0; i <= text.size(); i++)
    {
        text[i] = tolower(text[i]);
    }
    cout << "Texto em minusculo: " << text << endl;

    cout << "O Total de: " << text.size()<< " Caracteres" << endl;


    for (int i = 0; i <= text.size(); i++)
    {
        if(isspace(text[i]))
        {
            espacos++;
        }
        else if(isalnum(text[i]))
        {
            if(isdigit(text[i]))
            {
                numeros++;
            }

            for(int x = 0; x <= vogais.size(); x++)
            {

                if(text[i] == vogais[x])
                {
                    vogalCont++;
                }
            }
        }
    }

    consoantes = text.size() - (vogalCont + espacos + numeros);

    cout << "O Total de "<< espacos << " Espaços em Brancos" << endl;
    cout << "O total de "<< numeros << " Numeros" << endl;
    cout << "O total de " << vogalCont << " Vogais" << endl;
    cout << "O total de "<< consoantes << " Consoantes" << endl;

}

