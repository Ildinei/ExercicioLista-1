#include <iostream>
using namespace std;

int main() {
	
    int p1, p2, p3, p4, p5, pagamento, soma, troco;
    cout << "Digite o valor de 5 produtos (inteiros): ";
    cin >> p1 >> p2 >> p3 >> p4 >> p5;
    soma = p1 + p2 + p3 + p4 + p5;
    cout << "Soma total: R$" << soma << ". Digite o valor do pagamento: ";
    cin >> pagamento;
    troco = pagamento - soma;
    cout << "Troco a ser devolvido: R$" << troco << endl;
    return 0;
}