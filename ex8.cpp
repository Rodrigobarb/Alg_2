/*6 – 7 - Escreva um programa que recebe uma string qualquer do usuário e verifique se a
string forma um palíndromo. Palíndromo é uma palavra, frase ou número que
permanece igual quando lida de trás para frente, sem considerar os espaços em branco
e maiúsculas e minúsculas.

São exemplos de palíndromos: radar, Renner, Roma é amor, orava o avaro, socorram-

me subi no ônibus em Marrocos.*/
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

    cout << "Digite um endereço de e-mail: ";
    cin.getline(email, 100);

    if (validarEmailGoogle(email)) {
        cout << "VÁLIDO" << endl;
    } else {
        cout << "INVÁLIDO" << endl;
    }

    return 0;
}
