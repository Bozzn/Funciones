#include <iostream>
#include <conio.h>
#include <cmath>
#include <stdlib.h>
using namespace std;
float *valor;
void pedirRaices();
void calcularRaices();

int main(){
    pedirRaices();
    calcularRaices();
    delete[] valor;
    return EXIT_SUCCESS;
    }
void calcularRaices(){    
    cout << "Las reices de la ecuacion " << valor[0]  << "X^2 + " << valor[1] << "X + " << valor[2] << " es: \n- X1 = " << (-valor[1] - sqrt(pow(valor[1], 2) - 4*(valor[0]*valor[2])))/2*valor[0] << endl;
    cout << "- X2 = " << (-valor[1] + sqrt(pow(valor[1], 2) - 4*(valor[0]*valor[2])))/2*valor[0];
}
void pedirRaices(){
    valor = new  float [3];
    int raiz;

    cout << " \n\n----- RAICES DE UNA EC CUADRATICA -----\n\n        ax^2 + bx + c = 0 \n\n- Ingrese el valor de 'a': "; cin >> valor [0];
    cout << "Ingrese el valor de 'b': "; cin >> valor[1] ;
    cout << "Ingrese el valor de 'c': "; cin >> valor [2];
    cout << endl;
    raiz = pow(valor[1], 2) - 4*(valor[0]*valor[2]);

    if (raiz < 0)
    {
        cout << "La ecuacion tiene raices complejas. \n\n";
    }
    else if (raiz > 0)
    {
    cout << "La ecuacion tiene raices reales.\n\n";
    }
    else if (raiz == 0)
    {
        cout << "La ecuacion tiene raices iguales.\n\n";
    }
    
}
