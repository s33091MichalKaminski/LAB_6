#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Student {
    string imie;
    string nazwisko;
    int numerIndeksu;
};

void sortujStudentow(vector<Student>& studenci) {
    int n = studenci.size();
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (studenci[j].numerIndeksu > studenci[j + 1].numerIndeksu) {
                swap(studenci[j], studenci[j + 1]);
            }
        }
    }
}

void wyswietlStudentow(const vector<Student>& studenci) {
    for (const auto& student : studenci) {
        cout << "Imie: " << student.imie 
             << ", Nazwisko: " << student.nazwisko 
             << ", Numer Indeksu: " << student.numerIndeksu << endl;
    }
}

int main() {
    int iloscStudentow;
    cout << "Podaj liczbe studentow: ";
    cin >> iloscStudentow;

    vector<Student> studenci;

    for (int i = 0; i < iloscStudentow; ++i) {
        Student student;
        cout << "Podaj dane dla studenta " << i + 1 << ":" << endl;
        cout << "Imie: ";
        cin >> student.imie;
        cout << "Nazwisko: ";
        cin >> student.nazwisko;
        cout << "Numer Indeksu: ";
        cin >> student.numerIndeksu;
        studenci.push_back(student);
    }

    cout << "\nPrzed sortowaniem:" << endl;
    wyswietlStudentow(studenci);

    sortujStudentow(studenci);

    cout << "\nPo sortowaniu:" << endl;
    wyswietlStudentow(studenci);

    return 0;
}
