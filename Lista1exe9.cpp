#include <iostream>
using namespace std;

int main() {
	
    int diametro, raio, area;
    cout << "Digite o diametro do circulo: ";
    cin >> diametro;
    raio = diametro / 2;
    area = 3 * raio * raio; // Usando 3 como aproximação inteira de PI
    cout << "A area do circulo (aproximada inteira) e: " << area << endl;
    return 0;
}