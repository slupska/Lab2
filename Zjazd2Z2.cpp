#include <iostream>
using namespace std;

int main () {

    int a, b ;

    cout <<"Podaj liczbe a: ";
    cin >> a;
    cout <<"Podaj liczbe b: ";
    cin >> b;
    cout <<"\nPobrano liczby a == " << a <<" oraz b == " << b << "\n\n";
    
    cout <<"Wiersz o dlugosci a:\n";
    for ( int i=1 ; i <= a ; i++ ){
        cout << "*" ;
    }

    cout <<"\nKolumna o wielkosci b:\n";
    for (int i=1 ; i <=b ; i++){
        cout << "*\n";
    }

    cout <<"Prostokat gwiazdek o wymiarach 'a' na 'b':\n";
    for (int k = 1 ; k <= a ; k++){ //liczba wierszy
        
        for (int i=1 ; i<=b ; i++){ //liczba *
            cout <<"*";
        }
        cout << endl;
    }

    cout <<"Obwod prostokatu o wymiarach 'a' na 'b':\n";
    for (int k = 1 ; k <= a ; k++){
        
        for (int i=1 ; i<=b ; i++){
            if (k == 1 || k == a || i == 1 || i == b){
                cout <<"*";
            }
            else{
                cout <<" ";
            }
        }
        cout << endl;
    }

    cout <<"Trojkat prostokatny rownoramienny z katem prostym w lewym dolnym rogu:\n";
    for(int k=1; k<= a; k++) {
        for(int i=1; i <= k; i++) {
            cout << "*";
        }
        cout << endl;
    }

    cout <<"Trojkat prostokatny rownoramienny z katem prostym w prawym gornym rogu:\n";
    for(int k=1;  k<= a; k++) {
        for(int i = 1; i < k; i++) {
            cout << " ";
        }
        for(int j = k; j<= a; j++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;

}
