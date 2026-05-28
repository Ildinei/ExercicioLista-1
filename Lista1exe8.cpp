#include <iostream>
using namespace std;
int main() {
	
    int celsius, fahrenheit;
    
    cout << "Digite a temperatura em graus Celsius: ";
    cin >> celsius;
    fahrenheit = (celsius * 9 / 5) + 32;
    cout << "A temperatura em Fahrenheit e: " << fahrenheit << endl;
    return 0;
}