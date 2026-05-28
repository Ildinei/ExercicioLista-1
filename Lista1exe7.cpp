#include <iostream>
using namespace std;
int main() {
	
    int milhas, quilometros;
    
    cout << "Digite o valor em milhas maritimas: ";
    cin >> milhas;
    quilometros = (milhas * 1852) / 1000;
    cout << "O valor em quilometros (inteiro) e: " << quilometros << " km" << endl;
    return 0;
}