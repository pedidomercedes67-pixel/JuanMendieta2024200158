#include <iostream>
#include <fstream>
#include <string>

using namespace std;

// 1. Definición de la Estructura "Personaje"
struct Personaje {
    string nombre;
    int vida;
    int ataque;
};

// 2. Función para registrar y guardar el personaje en el archivo
void guardarPersonaje() {
    Personaje p;

    // Solicitar datos al usuario
    cout << "--- Registrar Nuevo Personaje ---\n";
    cout << "Nombre: ";
    cin >> p.nombre;
    cout << "Vida: ";
    cin >> p.vida;
    cout << "Ataque: ";
    cin >> p.ataque;

    // Abrir el archivo "personajes.txt" en modo adición (ios::app)
    ofstream archivo("personajes.txt", ios::app);

    // Verificar si el archivo se abrió correctamente
    if (archivo.is_open()) {
        // Escribir los datos en el archivo (separados por espacios o saltos de línea)
        archivo << p.nombre << " " << p.vida << " " << p.ataque << "\n";
        
        // Cerrar el archivo
        archivo.close();
        cout << "¡Personaje guardado exitosamente en 'personajes.txt'!\n\n";
    } else {
        cout << "Error: No se pudo abrir o crear el archivo.\n";
    }
}

int main() {
    // Ejemplo de uso
    char opcion;
    do {
        guardarPersonaje();
        cout << "¿Desea registrar otro personaje? (s/n): ";
        cin >> opcion;
    } while (opcion == 's' || opcion == 'S');

    return 0;
}
