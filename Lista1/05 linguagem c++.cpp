#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double preco_unit, dinheiro_recebido;
    int quantidade;

    cout << "Preco unitario do produto: ";
    cin >> preco_unit;
    cout << "Quantidade comprada: ";
    cin >> quantidade;
    cout << "Dinheiro recebido: ";
    cin >> dinheiro_recebido;

    double total = preco_unit * quantidade;
    double troco = dinheiro_recebido - total;

    cout << fixed << setprecision(2);
    cout << "TROCO = " << troco << endl;
    return 0;
}