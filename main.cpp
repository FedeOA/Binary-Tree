#include <iostream>
#include <string.h>
#include "arbol.h"
#include <stdio.h>

using namespace std;

int main()
{


nodoArbol *raiz=NULL;
char texto[500]=" ";
char texto2[500]=" ";

leerArchivo(texto);
leerArchivo(texto2);
arreglarTexo(texto);
seprarYmostrar2(texto2);
cout<<endl;
separarYmostrar(texto,raiz);
mostrarArbol(raiz);
eliminarArbol(raiz);







    return 0;
}
