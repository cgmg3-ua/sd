# Memoria

### Creación del inicio del proyecto
 Crearé sus archivos pertinentes en la rama iniciar_proyecto que posteriormete hare un merge a main para unir todos los cambios hechos en esa rama.


### Desarollo de proyecto
 En esta rama desarollare el proyecto para posteriormente usar  git hook y git bisect posteriormente a eso hare merge con main.

#### Al hacer el commit se lanza este error:

He modificado el archivo pre-commit para que compile mi proyecto y asi en cada commit todo funcione correctamente.

PS C:\Users\carlo\sd> git commit -m "prueba hook 3 con fallo"
El hook pre-commit se ha ejecutado
Biblioteca.cpp: In member function 'void Biblioteca::mostrarMenu()':
Biblioteca.cpp:43:9: error: expected ';' before 'cout'
         cout << "1. Registrar un libro" << endl;
         ^~~~
Error: La compilación falló. No se puede hacer el commit.

Asi quedaria con el proyecto funcionando correctamente.

PS C:\Users\carlo\sd> git commit -m "prueba hook correcta"   
El hook pre-commit se ha ejecutado
[desarrollo_proyecto 68696e4] prueba hook correcta
 2 files changed, 16 insertions(+), 4 deletions(-)


Ahora vamos a hacer uso del git bisect para ello primero dejaremos de hacer uso por ahora del hook para poder introducir errores para ello agregaremos a  pre-commit pre-commit.disabled .


    PS C:\Users\carlo\sd> git bisect start
    status: waiting for both good and bad commits

    PS C:\Users\carlo\sd> git bisect bad  
    status: waiting for good commit(s), bad commit known
        
    PS C:\Users\carlo\sd> git bisect good 5dfa69a0fc54ff9d18e1734d0c11ed7f5024394c
    Bisecting: 0 revisions left to test after this (roughly 1 step)
    [ae0bbfcfce897f9c403c1e816bad07b886f60078] commit 1 despues del error
    PS C:\Users\carlo\sd> git bisect bad
    Bisecting: 0 revisions left to test after this (roughly 0 steps)
    [90878a025c08c7df3fd1f7b6653e12f4815337ae] ERROR para probar git bistec
    PS C:\Users\carlo\sd> git bisect bad
    90878a025c08c7df3fd1f7b6653e12f4815337ae is the first bad commit
    commit 90878a025c08c7df3fd1f7b6653e12f4815337ae (HEAD)
    Author: Carlos Guirao <cgmg3@alu.ua.es>
    Date:   Thu Dec 26 14:41:25 2024 +0100

    ERROR para probar git bistec

    biblioteca.cpp | 2 +-
    1 file changed, 1 insertion(+), 1 deletion(-)
    PS C:\Users\carlo\sd> git bisect reset
    Previous HEAD position was 90878a0 ERROR para probar git bistec
    Switched to branch 'desarrollo_proyecto'
    Your branch is ahead of 'origin/desarrollo_proyecto' by 8 commits.
    (use "git push" to publish your local commits)

Despues de eso eliminare los 3 ultimos commits y usare de nuevo pre-commit para ver que todo funcione correctamente.

Por ultimo haré marge a main y volvere a hacer push a github.


GITHUB:https://github.com/cgmg3-ua/sd.git