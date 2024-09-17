/*5 – Na papelaria “Livro e Cia” a volta as aulas é um momento de realizar promoções, os itens
descritos abaixo estão com o respectivo desconto e percentual
 */
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
    string descricao[9] = {
        "Folha branca A4 com 500",
        "Caneta Bic ponta fina",
        "Caderno 10 matérias",
        "Caneta marca texto",
        "Cola bastão",
        "Corretor ortográfico",
        "Lápis preto",
        "Mochila com repartimento",
        "Caderno de desenho"
    };

    int codigo[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    double valor[9] = {28.00, 6.30, 22.00, 17.80, 5.50, 11.00, 4.50, 138.00, 8.00};
    double desconto[9] = {0.07, 0.05, 0.05, 0.06, 0.07, 0.10, 0.02, 0.07, 0.05};

    double totalCompra = 0;
    bool continuar = true;

    int codigoSelecionado, quantidade;

    cout << left;
    cout.fill(' ');
    cout.width(30); cout << "Descricao";
    cout.width(10); cout << "QTD";
    cout.width(15); cout << "Valor Item";
    cout.width(15); cout << "Desconto";
    cout.width(15); cout << "Total Item" << endl;

    while (continuar) {
        cout << "\n1 - Incluir mais um item\n2 - Encerrar a compra\nEscolha uma opcao: ";
        int opcao;
        cin >> opcao;

        if (opcao == 1) {
            cout << "Digite o código do item: ";
            cin >> codigoSelecionado;

            if (codigoSelecionado < 1 || codigoSelecionado > 9) {
                cout << "Código inválido. Tente novamente.\n";
                continue;
            }

            cout << "Digite a quantidade: ";
            cin >> quantidade;

            int indice = codigoSelecionado - 1;

            double valorItem = valor[indice] * quantidade;
            double descontoItem = valorItem * desconto[indice];
            double totalItem = valorItem - descontoItem;

            cout.width(30); cout.fill(' '); cout << descricao[indice];
            cout.width(10); cout << quantidade;
            cout.width(15); cout << fixed << setprecision(2) << valorItem;
            cout.width(15); cout << fixed << setprecision(2) << descontoItem;
            cout.width(15); cout << fixed << setprecision(2) << totalItem << endl;

            totalCompra += totalItem;
        }
        else if (opcao == 2) {
            cout << "\nTotal da compra: " << fixed << setprecision(2) << totalCompra << endl;
            continuar = false;
        }
        else {
            cout << "Opção inválida. Tente novamente.\n";
        }
    }

    return 0;
}






