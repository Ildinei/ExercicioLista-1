#include <iostream>

using namespace std;

int main(int argc, char** argv) 
{
    int base;
	int altura;
    
	cout << "Digite a base do retangulo: ";
    
	cin >> base;
	
    cout << "Digite a altura do retangulo: ";
    
    cin >> altura;
    
	cout << "A area do retangulo e: " << base * altura << endl;
    
	return 0;
}