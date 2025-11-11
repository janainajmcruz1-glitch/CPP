#include <iostream>
using namespace std;

int main() {
    int matriz[4][4] = {{1,9,3,4},{5,6,7,8},{2,10,11,12},{0,13,14,15}};
    int maior = matriz[0][0];

    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 4; j++)
            if (matriz[i][j] > maior)
                maior = matriz[i][j];

    cout << "Maior elemento: " << maior << endl;
}
