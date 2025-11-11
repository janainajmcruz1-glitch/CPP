#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    string nome1, nome2;
    int idade1, idade2;

    cout << "Digite o nome da primeira pessoa: ";
    cin >> nome1;
    cout << "Digite a idade de " << nome1 << ": ";
    cin >> idade1;

    cout << "Digite o nome da segunda pessoa: ";
    cin >> nome2;
    cout << "Digite a idade de " << nome2 << ": ";
    cin >> idade2;

    double media = (idade1 + idade2) / 2.0;

    cout << fixed << setprecision(1);
    cout << "A idade media de " << nome1 << " e " << nome2 << " eh " << media << " anos." << endl;
    return 0;
}