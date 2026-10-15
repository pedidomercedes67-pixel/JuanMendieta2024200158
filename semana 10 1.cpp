#include <iostream>
using namespace std;

int main() {
    char c;
    cout << "Ingresa un caracter: ";
    do {
        cin >> c;
        if (c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u') {
            cout << "No es una vocal minuscula. Intenta de nuevo: ";
        }
    } while (c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u');
    
    cout << "¡Correcto! Ingresaste la vocal: " << c << endl;
    return 0;
}
