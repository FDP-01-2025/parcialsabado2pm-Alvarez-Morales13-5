#include <iostream>
using namespace std;


int main (){
    //Declaración de las variables
    int numero;
    int n;

    cout << "Ingrese un numero: ";
    cin >> numero;

    for (int i = numero; i <= numero; i+=numero/i)
    {   
        n = i/numero;
        cout << "Numero primo: " << n << endl;
    }
    
    return 0;
}
