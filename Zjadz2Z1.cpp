#include <iostream>
using namespace std;

int main() {
    int n; 
    int Suma = 0; 

    cout << "Podaj liczbę n: ";
    cin >> n;

    for (int i = 1; i <= n; ++i) {
        int SumaAktualna = 0;  

        for (int j = 1; j <= i; ++j) {
            SumaAktualna += j;  
        }

        cout << "1";
        for (int j = 2; j <= i; ++j) {
            cout << " + " << j;
        }
        cout << " = " << SumaAktualna << endl;

        Suma += SumaAktualna;
    }

    cout << "Suma szeregu: ";
    for (int i = 1; i <= n; ++i) {
        int SumaAktualna = 0;
        for (int j = 1; j <= i; ++j) {
            SumaAktualna += j;
        }
        cout << SumaAktualna;
        if (i != n) {
            cout << " + ";
        }
    }
    cout << " = " << Suma << endl;

    return 0;
}
