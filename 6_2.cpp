#include <iostream>
#include <string>
using namespace std;


    struct student
    {
        string name;
        int ocena[4];
    };

int main()
{   
    student uczniowie[6] = {
        {"Ewa", 2, 2, 2, 2},
        {"Jacek", 5, 4, 6, 5 },
        {"Zofia", 3, 5, 2, 5 },
        {"Andrzej", 2, 4, 5, 3},
        {"Adam", 4, 6, 2, 3},
        {"Zuzanna", 3, 4, 5, 2},

    };
    
    int nu, np;

    nrucznia:
    cout << "Wybierz ucznia (1-6): ";
    cin >> nu;
    if (nu < 1 || nu>6) {
        cout << "Nieprawidłowy numer ucznia!" << endl;
        goto nrucznia;
    }

    nrprzedmiotu:
    cout << "Wybierz przedmiot: 1 - Informatyka, 2 - Matematyka, 3 - Biologia, 4 - Jezyk Polski: ";
    cin >> np;
    if (np < 1 || np>4) {
        cout << "Nieprawidłowy numer przedmiotu!" << endl;
        goto nrprzedmiotu;
    }

    switch (np) {
    case 1:
        cout << "Ocena z Informatyki ucznia " << uczniowie[nu - 1].name << ": " << uczniowie[nu - 1].ocena[1] << endl;
        break;
    case 2:
        cout << "Ocena z Informatyki ucznia " << uczniowie[nu - 1].name << ": " << uczniowie[nu - 1].ocena[2] << endl;
        break;
    case 3:
        cout << "Ocena z Informatyki ucznia " << uczniowie[nu - 1].name << ": " << uczniowie[nu - 1].ocena[3] << endl;
        break;
    case 4:
        cout << "Ocena z Informatyki ucznia " << uczniowie[nu - 1].name << ": " << uczniowie[nu - 1].ocena[4] << endl;
        break;
    default:
        cout << "Bledny wybor" << endl;
        break;
    }

         
       

        

    return 0;
}



