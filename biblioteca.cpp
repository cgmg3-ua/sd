#include "Biblioteca.h"
#include <iostream>
#include <string>
using namespace std;

// Método para registrar un libro
void Biblioteca::registrarLibro() {
    string titulo, autor;
    int anioPublicacion;

    cout << "\nIngrese el título del libro: ";
    cin.ignore(); // Limpiar el buffer
    getline(cin, titulo);
    cout << "Ingrese el autor del libro: ";
    getline(cin, autor);
    cout << "Ingrese el año de publicación: ";
    cin >> anioPublicacion;

    libros.emplace_back(titulo, autor, anioPublicacion);
    cout << "¡Libro registrado con éxito!" << endl;
}

// Método para mostrar todos los libros registrados
void Biblioteca::mostrarLibros() const {
    if (libros.empty()) {
        cout << "\nNo hay libros registrados." << endl;
        return;
    }

    cout << "\n===== LIBROS REGISTRADOS =====" << endl;
    for (size_t i = 0; i < libros.size(); ++i) {
        cout << i + 1 << ". ";
        libros[i].mostrarDetalles();
    }
}

// Método para mostrar el menú
void Biblioteca::mostrarMenu() {
    int opcion;

    do {
        cout << "\n===== MENU =====" << endl;
        cout << "1. Registrar un libro" << endl;
        cout << "2. Mostrar libros registrados" << endl;
        cout << "3. Salir" << endl;
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                registrarLibro();
                break;
            case 2:
                mostrarLibros();
                break;
            case 3:
                cout << "Saliendo del programa. ¡Hasta luego!" << endl;
                break;
            default:
                cout << "Opción no valida. Intente de nuevo." << endl;
        }
    } while (opcion != 3);
}
