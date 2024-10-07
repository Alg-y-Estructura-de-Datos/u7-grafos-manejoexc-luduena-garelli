#include <iostream>
#include "Grafos/Grafo.h"
using namespace std;

void menu(Grafo<string> &red_social){
    int opcion;
    string usuario1, usuario2;
    do {
        cout << "1. Agregar usuario1" << endl;
        cout << "2. Agregar amigo" << endl;
        cout << "3. Eliminar amigo" << endl;
        cout << "4. Buscar usuario1" << endl;
        cout << "5. Mostrar Red Social" << endl;
        cout << "0. Salir" << endl;
        cout << "Ingrese una opcion: ";
        cin >> opcion;
        switch (opcion) {
            case 1:
                cout << "Ingrese el nombre del usuario1: ";
                cin >> usuario1;
                red_social.agregarNodo(usuario1);
                break;
            case 2:
                cout << "Ingrese el nombre del usuario1: ";
                cin >> usuario1;
                cout << "Ingrese el nombre del amigo: ";
                cin >> usuario2;
                red_social.agregarArista(usuario1, usuario2);
                break;
            case 3:
                cout << "Ingrese el nombre del usuario: ";
                cin >> usuario1;
                cout << "Ingrese el nombre del amigo: ";
                cin >> usuario2;
                red_social.eliminarArista(usuario1, usuario2);

                break;
            case 4:
                cout << "Ingrese el nombre del usuario1: ";
                cin >> usuario1;
                if (red_social.buscarNodo(usuario1)){
                    cout << "El usuario1 " << usuario1 << " se encuentra en la red social" << endl;
                } else {
                    cout << "El usuario1 " << usuario1 << " no se encuentra en la red social" << endl;
                }
                break;
            case 5:
                red_social.imprimir();
                break;
            default:
                break;

        }

    } while (opcion != 0);
}


int main() {
    Grafo<string> red_social;
    menu(red_social);



    return 0;
}
