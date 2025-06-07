#include <iostream>
using namespace std;


int main (){
    //Declaración de las variables
    int opcion;
    string usuario;
    int carnet [8];
    string arreglo;


    cout << "Ingrese nombre del usuario: ";
    cin >> usuario;
    cout << "Ingrese numero de carnet (8 digitos): ";
    cin >> carnet [8];

    while (opcion = 3) {
        cout << "---Menu---" << endl;
        cout << "1. Prestar libro" << endl;
        cout << "2. Devolver libro" << endl;
        cout << "3. Salir" << endl;
        cin >> opcion;

        switch (opcion)
        {
        case 1:
            cout << "Ingrese titulo del libro: ";
            cin >> arreglo;
            cout << "Prestamo exitoso" << endl;

            break;

        case 2:
            cout << arreglo << endl;
        
            break;

        case 3:
            cout << "Adios" << endl;
            
            return 0;

        default:
            cout << "Elija una de las opciones" << endl;
            break;
        }


    }
    
    
    return 0;
}