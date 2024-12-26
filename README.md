# Memoria

### Creación del inicio del proyecto
 Crearé sus archivos pertinentes en la rama iniciar_proyecto que posteriormete hare un merge a main para unir todos los cambios hechos en esa rama.


### Desarollo de proyecto
 En esta rama desarollare el proyecto para posteriormente usar  git hook y git bistec posteriormente a eso hare merge con main.

#### Al hacer el commit se lanza este error:

He modificado el archivo pre-commit para que compile mi proyecto y asi en cada commit todo funcione correctamente.

PS C:\Users\carlo\sd> git commit -m "prueba hook 3 con fallo"
El hook pre-commit se ha ejecutado
Biblioteca.cpp: In member function 'void Biblioteca::mostrarMenu()':
Biblioteca.cpp:43:9: error: expected ';' before 'cout'
         cout << "1. Registrar un libro" << endl;
         ^~~~
Error: La compilación falló. No se puede hacer el commit.