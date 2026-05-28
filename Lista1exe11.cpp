#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int x, y, resultado;
    cout << "Digite o valor de X e Y: ";
    cin >> x >> y;
    resultado = pow(x, y);
    cout << "X elevado a Y e: " << resultado << endl;
    return 0;
}