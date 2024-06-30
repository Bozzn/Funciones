#include <iostream>
#include <conio.h>
#include <cmath>
using namespace std;
int main(){
    float a, b, c;
    cout << "\n\n----- RAICES DE UNA EC CUADRATICA -----\n\n        ax^2 + bx + c = 0 \n\n- Ingrese el valor de 'a': "; cin >> a;
    cout << "Ingrese el valor de 'b': "; cin >> b;
    cout << "Ingrese el valor de 'c': "; cin >> c;

    cout << "Las reices de la ecuacion " << a  << "X^2 + " << b << "X + " << c << " es: \n- X1 = " << (-b - sqrt(pow(b, 2) - 4*(a*c)))/2*a << endl;
    cout << "- X2 = " << (-b + sqrt(pow(b, 2) - 4*(a*c)))/2*a;

    return EXIT_SUCCESS;
}