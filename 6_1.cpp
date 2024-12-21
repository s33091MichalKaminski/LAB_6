#include <iostream>
#include <string>
using namespace std;

int main()
{   
    int n; 
    cout << "Podaj liczbe n" << endl;
    cin >> n;
    int liczbaLiczb = 0;

    for (int i = 1; i <= n; i++) {
        if (i % 5 == 0 && i % 3 != 0) {
            liczbaLiczb++;
        }
    }
    cout << "Liczba liczb naturalnych spelniajacych warunki zadania wynosi: " << liczbaLiczb << endl;
    
    return 0;
}

