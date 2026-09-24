#include <iostream>
using namespace std;
int main() {
    int opcion;
    double num1, num2;
    cout << "--- MENU DE OPERACIONES ---" << endl;
    cout << "1. Sumar" << endl;
    cout << "2. Restar" << endl;
    cout << "3. Multiplicar" << endl;
    cout << "4. Dividir" << endl;
    cout << "Seleccione una opcion (1-4): ";
    cin >> opcion;
    if (opcion >= 1 && opcion <= 4) {
    
        cout << "Ingrese el primer numero: ";
        cin >> num1;
        cout << "Ingrese el segundo numero: ";
        cin >> num2;
        	if (num1 >= 0 && num2 <= 100) {
        switch (opcion) {
            case 1:
                cout << "Resultado: " << num1 + num2 << endl;
                break;
            case 2:
                cout << "Resultado: " << num1 - num2 << endl;
                break;
            case 3:
                cout << "Resultado: " << num1 * num2 << endl;
                break;
            case 4:
                if (num2 != 0) {
                    cout << "Resultado: " << num1 / num2 << endl;
                } else {
                    cout << "Error: No se puede dividir entre cero." << endl;
                }
                break;
        }
		} else {
			cout << "Error: Opcion invalida." << endl;
		}
    } else {
        cout << "Error: Opcion invalida." << endl;
    }

    return 0;
}

