//
// Acquisire da tastiera un carattere MAIUSCOLO
// stampare a video il carattere MINUSCOLO
// corrispondente
// NOTA1: in modo indipendente dalla codifica ASCII
// NOTA2: senza usare funzioni della libreria string
//

#include <iostream>
using namespace std;

int main() {
    char carattere;

    cout << "Inserisci un carattere: ";
    cin >> carattere;

    carattere += 'a' - 'A';

    cout << carattere << endl;

    return (0);
}
