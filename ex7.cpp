/*6 � 7 - Escreva um programa que recebe uma string qualquer do usu�rio e verifique se a
string forma um pal�ndromo. Pal�ndromo � uma palavra, frase ou n�mero que
permanece igual quando lida de tr�s para frente, sem considerar os espa�os em branco
e mai�sculas e min�sculas.

S�o exemplos de pal�ndromos: radar, Renner, Roma � amor, orava o avaro, socorram-

me subi no �nibus em Marrocos.*/
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
        cout << "a palavra � palindromo!" << endl;
    } else {
        cout << "a palavra n�o e palindromo." << endl;
    }

    return 0;
}

