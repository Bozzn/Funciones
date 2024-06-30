#include <iostream>
#include <conio.h>
#include <cmath>
using namespace std;
void hipotenusa();
int main(){
    hipotenusa();
    return EXIT_SUCCESS;
}
void hipotenusa(){
    double c1, c2, h;
    cout << "\n\n----------PITAGORAS----------\n\n";
    cout << "Ingrese el cateto opuesto del triangulo: "; cin >> c1;
    cout << "Ingrese el cateto adyacente del triangulo: "; cin >> c2;
    cout << "La hipotenusa del triangulo rectangulo es: " << sqrt(pow(c1, 2) + pow(c2, 2));
}