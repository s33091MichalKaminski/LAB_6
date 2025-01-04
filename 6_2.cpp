#include <iostream>
#include <string>
using namespace std;

struct student {
    string name;
    int ocena[4];
};

int main() {
    student uczniowie[6];

    for (int i = 0; i < 6; i++) {
        cout << "Podaj imię ucznia " << i + 1 << ": ";
        cin >> uczniowie[i].name;

        cout << "Podaj oceny dla ucznia " << uczniowie[i].name << " (Informatyka, Matematyka, Biologia, Jezyk Polski):\n";
        for (int j = 0; j < 4; j++) {
            cout << "Ocena z przedmiotu " << j + 1 << ": ";
            cin >> uczniowie[i].ocena[j];
        }
    }

    int liczzap;
    cout << "Podaj liczbe zapytan (maksymalnie 6): ";
    cin >> liczzap;

    if (liczzap < 1 || liczzap > 6) {
        cout << "Nieprawidłowa liczba zapytań! Liczba zapytań musi być od 1 do 6." << endl;
        return 1;
    }

    for (int i = 0; i < liczzap; i++) {
        int nu, np;

        cout << "Wybierz ucznia (1-6): ";
        cin >> nu;
        if (nu < 1 || nu > 6) {
            cout << "Nieprawidłowy numer ucznia!" << endl;
            i--;
            continue;
        }

        cout << "Wybierz przedmiot: 1 - Informatyka, 2 - Matematyka, 3 - Biologia, 4 - Jezyk Polski: ";
        cin >> np;
        if (np < 1 || np > 4) {
            cout << "Nieprawidłowy numer przedmiotu!" << endl;
            i--;
            continue;
        }

        switch (np) {
            case 1:
                cout << "Ocena z Informatyki ucznia " << uczniowie[nu - 1].name << ": " << uczniowie[nu - 1].ocena[0] << endl;
                break;
            case 2:
                cout << "Ocena z Matematyki ucznia " << uczniowie[nu - 1].name << ": " << uczniowie[nu - 1].ocena[1] << endl;
                break;
            case 3:
                cout << "Ocena z Biologii ucznia " << uczniowie[nu - 1].name << ": " << uczniowie[nu - 1].ocena[2] << endl;
                break;
            case 4:
                cout << "Ocena z Jezyka Polskiego ucznia " << uczniowie[nu - 1].name << ": " << uczniowie[nu - 1].ocena[3] << endl;
                break;
            default:
                cout << "Błędny wybór" << endl;
                break;
        }
    }

    return 0;
}
