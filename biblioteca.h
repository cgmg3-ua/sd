#ifndef BIBLIOTECA_H
#define BIBLIOTECA_H

#include <vector>
#include "Libro.h"

class Biblioteca {
private:
    vector<Libro> libros;

public:
    // Métodos de la clase
    void registrarLibro();
    void mostrarLibros() const;
    void mostrarMenu();
};

#endif
