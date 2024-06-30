#include <iostream>
#include <conio.h>
#include <cmath>

void AreaCirculo();
using namespace std;
int main(){
    AreaCirculo();

    return EXIT_SUCCESS;
}
void AreaCirculo(){
    double r;
    double const pi = M_PI;
cout << "--------Area de un circulo--------\n- Ingrese el radio del circulo: "; cin >> r;
cout << "El Area del circulo es: " << pi * pow(r, 2);
}