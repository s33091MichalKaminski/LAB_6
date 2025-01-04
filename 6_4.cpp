#include <iostream>
#include <string>

using namespace std;

int main() {
    string input;
    int n;

    // Pobranie danych od użytkownika
    cout << "Podaj string: ";
    cin >> input;
    cout << "Podaj liczbe n: ";
    cin >> n;

    // Zmienna do przechowywania wyniku
    string wynik;

    // Konkatenacja stringa n razy
    for (int i = 0; i < n; ++i) {
        wynik += input;
    }

    // Wyświetlenie wyniku
    cout << "Skonkatenowany string: " << wynik << endl;

    return 0;
}
