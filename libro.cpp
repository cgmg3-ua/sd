#include "Libro.h"

// Constructor
Libro::Libro(string t, string a, int anio) : titulo(t), autor(a), anioPublicacion(anio) {}

// Método para mostrar los detalles del libro
void Libro::mostrarDetalles() const {
    cout << "Titulo: " << titulo
         << ", Autor: " << autor
         << ", Anyo: " << anioPublicacion << endl;
}
