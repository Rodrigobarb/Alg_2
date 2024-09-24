/*6 � 7 - Escreva um programa que recebe uma string qualquer do usu�rio e verifique se a
string forma um pal�ndromo. Pal�ndromo � uma palavra, frase ou n�mero que
permanece igual quando lida de tr�s para frente, sem considerar os espa�os em branco
e mai�sculas e min�sculas.

S�o exemplos de pal�ndromos: radar, Renner, Roma � amor, orava o avaro, socorram-

me subi no �nibus em Marrocos.*/
#include <iostream>
#include <cstring>

using namespace std;

bool validarEmailGoogle(char email[]) {
    int tamanho = strlen(email);
    bool encontrouArroba = false;
    bool valido = true;

    if (isdigit(email[0])) {
        return false;
    }

    for (int i = 0; i < tamanho; i++) {
        if (isspace(email[i])) {
            return false;
        }
        if (isupper(email[i])) {
            return false;
        }

        if (email[i] == '@') {
            if (encontrouArroba) {
                return false;
            }
            encontrouArroba = true;

            if (strcmp(&email[i], "@gmail.com") != 0) {
                return false;
            }
        }

        if (!isalnum(email[i]) && email[i] != '@' && email[i] != '_' && email[i] != '.') {
            return false;
        }

        if (i > 0 && (email[i] == '_' || email[i] == '.')) {
            if (email[i - 1] == '_' || email[i - 1] == '.' || email[i - 1] == '@') {
                return false;
            }
        }
    }

    if (!encontrouArroba) {
        return false;
    }

    return true;
}

int main() {
    setlocale(LC_ALL, "portuguese");

    char email[100];

    cout << "Digite um endere�o de e-mail: ";
    cin.getline(email, 100);

    if (validarEmailGoogle(email)) {
        cout << "V�LIDO" << endl;
    } else {
        cout << "INV�LIDO" << endl;
    }

    return 0;
}
