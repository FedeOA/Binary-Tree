#include <iostream>
#include <string.h>
#include "arbol.h"
#include <locale.h>



using namespace std;






struct nodoArbol {

char palabra[20];


nodoArbol *izq;
nodoArbol *der;

};


nodoArbol *cargarArbol (char pal[20]){



nodoArbol *hoja=new nodoArbol ();

strcpy(hoja->palabra,pal);
  hoja->der=NULL;
  hoja->izq=NULL;




return hoja;
}
nodoArbol *crearHoja(nodoArbol *&arbol, char pal[20]){

if (strlen(pal)<4){


    return 0;

}




if (arbol==NULL ){

nodoArbol *hoja=cargarArbol(pal);

arbol=hoja;


}else


if (strcmp(arbol->palabra,pal)>0 && strlen(pal)>4){



crearHoja(arbol->izq,pal);

}else
if (strcmp(arbol->palabra,pal)<0 && strlen(pal)>4){



crearHoja(arbol->der,pal);


}



}

void leerArchivo (char texto[500]){

FILE *abrir= fopen("texto.txt","r");



fgets(texto,500,abrir);



fclose(abrir);

}

void mostrarArbol (nodoArbol * arbol){


int cont;

if (arbol==NULL){

return ;

}else{

mostrarArbol(arbol->izq);
cout<<"*  "<<arbol->palabra<<endl;
mostrarArbol(arbol->der);

}


}

void eliminarArbol (nodoArbol *arbol ){






delete (arbol);
eliminarArbol(arbol->izq);
eliminarArbol(arbol->der);





}





void separarYmostrar(char texto[500],  nodoArbol *&arbol){

char *token2=strtok(texto,". , ; ");
int cont=0;


while (token2){



crearHoja(arbol,token2);

token2=strtok(NULL," . , ; ");


}


}

void seprarYmostrar2(char texto[500]){


char *token=strtok(texto,". , ; ");
int cont=0;


while (token){
cont++;

cout<<cont<<". "<<token<<endl;
token=strtok(NULL," . , ; ");


}
}

void arreglarTexo(char texo[500]){


for (int i=0;i<500;i++){


   if (texo[i]=='T'){



texo[i]='t';


}
}
}















