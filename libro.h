#ifndef LIBRO_H
#define LIBRO_H

#include <string>
#include <iostream>
using namespace std;

// Clase para representar un libro
class Libro {
private:
    string titulo;
    string autor;
    int anioPublicacion;

public:
    // Constructor
    Libro(string t, string a, int anio);

    // Método para mostrar los detalles del libro
    void mostrarDetalles() const;
};

#endif
