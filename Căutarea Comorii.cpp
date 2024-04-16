// Căutarea Comorii.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <ctime> // Pentru a genera o valoare de timp aleatoare
#include <cstdlib> // Pentru a genera numere aleatoare

// Folosim std:: pentru a face referire la elementele din biblioteca standard
using std::cout;
using std::cin;
using std::endl;

const int dimensiune = 5;

int main() {
    // Initializare harta
    int harta[dimensiune][dimensiune] = { 0 };

    // Generare pozitie aleatoare pentru comoara
    srand(time(NULL)); // Initializare generator de numere aleatoare
    int randComoara = rand() % dimensiune;
    int coloanaComoara = rand() % dimensiune;

    // Setare comoara pe harta
    harta[randComoara][coloanaComoara] = 1;

    // Variabila pentru a controla daca jocul trebuie sa continue
    char continuare;

    do {
        // Cerere coordonate de la utilizator
        cout << "Introduceti randul si coloana: ";
        int randUtilizator, coloanaUtilizator;
        cin >> randUtilizator >> coloanaUtilizator;

        // Verificare daca utilizatorul a gasit comoara
        if (randUtilizator == randComoara && coloanaUtilizator == coloanaComoara) {
            cout << "Ai gasit comoara!" << endl;
        }
        else {
            cout << "Nu ai gasit comoara. Mai incearca!" << endl;
        }

        // Intrebam utilizatorul daca doreste sa continue
        cout << "Doresti sa continui jocul? (y/n): ";
        cin >> continuare;
    } while (continuare == 'y');

    return 0;
}