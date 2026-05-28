#include <iostream>
using namespace std;

int main() {
	
    int cotacao, quantidade, reais;
    cout << "Digite a cotacao do dolar (inteiro) e a quantidade: ";
    cin >> cotacao >> quantidade;
    reais = cotacao * quantidade;
    cout << "O valor em Reais (R$) e: " << reais << endl;
    return 0;
}