#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    double base, altura;
    cout << "Digite a base do retangulo: ";
    cin >> base;
    cout << "Digite a altura do retangulo: ";
    cin >> altura;

    double area = base * altura;
    double perimetro = 2 * (base + altura);
    double diagonal = sqrt(pow(base, 2) + pow(altura, 2));

    cout << fixed << setprecision(4);
    cout << "Area = " << area << endl;
    cout << "Perimetro = " << perimetro << endl;
    cout << "Diagonal = " << diagonal << endl;
    return 0;
}