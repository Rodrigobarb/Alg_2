/*6 9 - Um pangrama é uma frase que contém todas as letras de um determinado alfabeto.
Em português, um pangrama pode incluir também letras acentuadas, mas neste
problema vamos desconsiderar os acentos (mesmo que isso torne a frase mal escrita!),*/

#include <iostream>
#include <string>

using namespace std;

int main() {
    setlocale(LC_ALL, "portuguese");

    string frase;
    bool letrasEncontradas[26];
    string alfabeto = "abcdefghijlmnopqrstuvxz";

    cout << "Digite uma frase: ";
    getline(cin, frase);

    for (int i = 0; i < 26; i++) {
        letrasEncontradas[i] = false;
    }

    for (int i = 0; i < frase.size(); i++) {
        char letra = tolower(frase[i]);
        int indice = letra - 'a';
        if (isalpha(letra)) {
            for (int j = 0; j < alfabeto.size(); j++) {
                if (letra == alfabeto[j]) {
                    letrasEncontradas[indice] = true;
                    break;
                }
            }
        }
    }

    bool ehPangrama = true;
    for (int i = 0; i < 26; i++) {
        if (!letrasEncontradas[i]) {
            ehPangrama = false;
            break;
        }
    }

    if (ehPangrama) {
        cout << "S" << endl;
    } else {
        cout << "N" << endl;
    }

    return 0;
}
