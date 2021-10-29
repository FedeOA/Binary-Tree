#ifndef ARBOL_H_INCLUDED
#define ARBOL_H_INCLUDED


struct nodoArbol;

nodoArbol *crearHoja(nodoArbol *&arbol, char pal[20]);
void mostrarArbol (nodoArbol * arbol );
nodoArbol *cargarArbol (char pal[20]);
void leerArchivo (char texto[400]);
void separarYmostrar(char texto[500], nodoArbol *&arbol);
void seprarYmostrar2(char texto[500]);
void arreglarTexo(char texo[500]);
void eliminarArbol (nodoArbol *arbol );
#endif // ARBOL_H_INCLUDED
