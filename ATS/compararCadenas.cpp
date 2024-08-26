// Comparar cadenas - Funcion strcmp()
//
#include <cstring>
#include <iostream>
#include <string.h>

using namespace std;

int main() {
    char palabra1[] = "hola";
    char palabra2[] = "hola";

    if(strcmp(palabra1, palabra2) == 0)
        cout << "ambas cadenas son iguales" << endl;
    else
        cout << "No son iguales" << endl;


    char p1[] = "avion";
    char p2[] = "becerro";

    if(strcmp(p1, p2) < 0)
        cout << p1 << " va primero en el alfabeto, es mayor" << endl;

    return 0;
}
