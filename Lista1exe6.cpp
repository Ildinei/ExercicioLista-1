#include <iostream>
#include <cmath>
using namespace std;
int main() {
    
	int v1, v2, media;
    cout << "Digite dois valores: ";
    cin >> v1 >> v2;
    media = sqrt(v1 * v2);
    cout << "A media geometrica (inteira) e: " << media << endl;
    return 0;
}