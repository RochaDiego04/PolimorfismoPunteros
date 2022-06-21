#include "Menu.h"

/*En este bello código primero se llama a la clase menu, luego el menu crea objetos para mandarlos
a canva, canva realiza el metodo de imprimir figuras y manda a llamr al metodo dibujar de la clase shape, shape se encarga de pasar la funcion virtual
a square y triangle*/

using namespace std;

int main()
{
    Menu menusito;
    menusito.run();
    return 0;
}