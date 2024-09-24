/*6 – 7 - Escreva um programa que recebe uma string qualquer do usuário e verifique se a
string forma um palíndromo. Palíndromo é uma palavra, frase ou número que
permanece igual quando lida de trás para frente, sem considerar os espaços em branco
e maiúsculas e minúsculas.

São exemplos de palíndromos: radar, Renner, Roma é amor, orava o avaro, socorram-

me subi no ônibus em Marrocos.*/
#include <iostream>
#include <cstring>

using namespace std;

int main() {
    setlocale(LC_ALL, "portuguese");

    char texto[100], textoLimpo[100], textoInvertido[100];
    int tamanho = 0, j = 0;

    cout << "Digite um texto: ";
    cin.getline(texto, 100);

    for (int i = 0; i < strlen(texto); i++) {
        if (!isspace(texto[i]) && isalnum(texto[i])) {
            textoLimpo[j] = tolower(texto[i]);
            j++;
        }
    }
    textoLimpo[j] = '\0';
    tamanho = strlen(textoLimpo);
    for (int i = 0; i < tamanho; i++) {
        textoInvertido[i] = textoLimpo[tamanho - 1 - i];
    }
    textoInvertido[tamanho] = '\0';

    if (strcmp(textoLimpo, textoInvertido) == 0) {
        cout << "a palavra é palindromo!" << endl;
    } else {
        cout << "a palavra não e palindromo." << endl;
    }

    return 0;
}

