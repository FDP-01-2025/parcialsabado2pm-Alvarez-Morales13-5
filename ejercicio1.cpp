#include <iostream>
using namespace std;


int main (){
    //Declaración de las variables
    float numero1, numero2;

    cout << "Ingrese un numero: ";
    cin >> numero1;
    cout << "Ingrese otro numero: ";
    cin >> numero2;
    
    if (numero1 > numero2)
    {
        cout << numero1 << " es mayor a " << numero2 << endl;
    } else if(numero2 > numero1)
    {
        cout << numero2 << " es mayor a " << numero1 << endl;
    } else{
        numero1 = numero2;
        cout << "Los numeros son iguales";
    }
    
    return 0;
}