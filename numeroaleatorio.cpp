#include <iostream>
#include <conio.h>
#include <ctime>
using namespace std;
int main(){
    int limite, cant, comienzo;
    cout << "\n\n-------GENERADOR DE NUMEROS ALEATORIOS-------\n\n\n- Ingrese La cantidad de numeros aleatorios que desea visualizar: "; cin >> cant; 
    cout << "- Ingrese el intervalo de los numeros que desea ver: (Comiezo / Final) " << endl; cin >> comienzo; cin >> limite; 
    srand(time(NULL));
    cout << "Numeros Aleatorios dentro de " << comienzo << " y " << limite << "."<< endl;
    for (int i = 0; i < cant; i++)
    {
        int num = (rand() % limite)+ comienzo;
        if (num <= limite)
        {
            cout << num << " ";
        }
        else
        {
            i--;
        }
        
        
    }
    return EXIT_SUCCESS;
}
