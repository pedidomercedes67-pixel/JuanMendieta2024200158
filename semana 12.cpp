#include <iostream>
#include <string>

using namespace std;

struct Personaje {
    string nombre;
    int ataque;
};
int main() {
    Personaje p1;
    p1.nombre = "TocPod";
    p1.ataque = 220;

    Personaje p2;
    p2.nombre = "Guerrero Shifu";
    p2.ataque = 200;

    cout << "=== BATALLA DE ATRIBUTOS ===" << endl;
    cout << p1.nombre << " -> Puntos de Ataque: " << p1.ataque << endl;
    cout << p2.nombre << " -> Puntos de Ataque: " << p2.ataque << endl;
    cout << "----------------------------" << endl;

    if (p1.ataque > p2.ataque) {
        cout << "¡El ganador es " << p1.nombre << " con mayor fuerza de ataque!" << endl;
    } else if (p2.ataque > p1.ataque) {
        cout << "¡El ganador es " << p2.nombre << " con mayor fuerza de ataque!" << endl;
    } else {
        cout << "¡Es un empate! Ambos tienen la misma fuerza de ataque." << endl;
    }

    return 0;
}
