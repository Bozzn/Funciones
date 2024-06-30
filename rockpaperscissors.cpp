#include <iostream>
#include <ctime>
#include <conio.h>
using namespace std;
char eleccionUsario();
char eleccionMaquina();
void mostrarEleccion(char);
int mostrarGanador(char, char);

int main(){
    char jugador;
    char computadora;
    int resultado;
    int  j=0, c=0;
    while (j != 3 && c != 3)
    {
    jugador = eleccionUsario();
    cout << "************************************\n";
    cout << "Jugador: ";
    mostrarEleccion(jugador); cout << endl;

    computadora = eleccionMaquina();
    cout << "Computadora: ";
    mostrarEleccion(computadora); cout << endl;
    resultado = mostrarGanador(jugador, computadora);
    if (resultado == 0)
    {
        cout << "Empate!\n";
        cout << "************************************\n";
        getch();
    } else if (resultado == 1)
    {
        cout << "Ganaste!\n";
        cout << "************************************\n";
        j++;
        getch();
    }else
    {
        cout << "Perdiste!\n";
        cout << "************************************\n";
        c++;
        getch();
    }
    }
    cout << "************************************\n";
    cout << "-----------RESULTADO FINAL----------\n";
    cout << "- Jugador: " << j << " wins.\n";
    cout << "- Computadora: " << c << " wins.\n";
    cout << "************************************\n";
    if (j == 3)
    {
        cout << "El ganador es | JUGADOR!!!\n\n";
    }
    if (c == 3)
    {
        cout << "El ganador es | COMPUTADORA!!!\n\n----------GAME OVER--------\n\n";
    }
    cout << "GRACIAS POR JUGAR.";

    
    


    return EXIT_SUCCESS;

}

char eleccionUsario(){
    char jugador;   
    cout << "************************************\n";
    cout << "     Piedra - Papel - Tijera.\n\n";
    cout << "************************************\n";
    cout << "r = Piedra.\n";
    cout << "p = Papel.\n";
    cout << "t = Tijera.\n";

    do
    {
    cout << "Elija uno: "; cin >> jugador;
    } while (jugador != 'r' && jugador != 'p' && jugador != 't');
    return jugador;
    
}
char eleccionMaquina(){
    srand(time(NULL));
    int num = rand() % 3;
    switch (num)
    {
    case 0:
        return 'r';
        break;
    case 1:
        return 'p';
        break;
    case 2: 
        return 't';
        break;
    
    default:
        break;
    }
}
void mostrarEleccion(char eleccion){
        switch (eleccion)
    {
    case 'r':
        cout << "Piedra \n";
        break;
    case 'p':
        cout << "Papel \n";
        break;
    case 't':
        cout << "Tijera \n";
        break;
    default:
        break;
    }
}
int mostrarGanador(char jugador, char computadora){
    switch (jugador)
    {
    case 'r':
        if (computadora == 'r')
        {
            return 0;
        } else if (computadora == 'p')
        {
            return 2;
        }else
        {
            return 1;
        }
        break;
    case 'p':
        if (computadora == 'p')
        {
            return 0;
        } 
        else if (computadora == 'r')
        {
            return 1;
        }
        else
        {
            return 2;
        }
        break;
    case 't':
        if (computadora == 't')
        {
            return 0;
        }
        else if (computadora == 'r')
        {
            return 2;
        }
        else
        {
            return 1;
        }
        break;

    }
    
}