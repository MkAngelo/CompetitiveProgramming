// Cadenas de caracteres 

#include <iostream>
#include <string.h>

using namespace std;

int main(){
    char palabra[] = "Alejandro";
    char palabra2[] = {'A','l','e','j','a','n','d','r','o'};
    char nombre[20];

    // cin >> nombre #Solo va a almacenar hasta encontrar el primer espacio en blanco " "
    // gets(nombre) #Asigna memoria demas si es que hace falta
    // cin.getline(variable, tamano, termino) # Mejor opcion

    cout << "Digita tu nombre: ";
    cin.getline(nombre, 20, '\n');
    cout << nombre << endl;

    // LONGITUD DE UNA CADENA

    int longitud = strlen(palabra);
    cout << "Numero de elementos de la cadena es: " << longitud << endl;


    return 0;
}
