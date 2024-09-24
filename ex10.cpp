/*6 –Pangrama*/

#include <iostream>
#include <cstring>

using namespace std;

bool saoAnagramas(const char* palavraA, const char* palavraB) {
    if (strlen(palavraA) != strlen(palavraB)) {
        return false;
    }

    int contagem[26] = {0};

    for (int i = 0; palavraA[i] != '\0'; ++i) {
        contagem[tolower(palavraA[i]) - 'a']++;
    }

    for (int i = 0; palavraB[i] != '\0'; ++i) {
        contagem[tolower(palavraB[i]) - 'a']--;
    }
    for (int i = 0; i < 26; ++i) {
        if (contagem[i] != 0) {
            return false;
        }
    }

    return true;
}

int main() {
    char palavraA[100], palavraB[100];

    cout << "Digite a primeira palavra: ";
    cin >> palavraA;
    cout << "Digite a segunda palavra: ";
    cin >> palavraB;

    if (saoAnagramas(palavraA, palavraB)) {
        cout << "SIM" << endl;
    } else {
        cout << "NÃO" << endl;
    }

    return 0;
}

