#include <iostream>
using namespace std;
int main () {

int month;

cout <<"Podaj liczbe od 1 do 12.\n";
cin >> month;

switch(month){
    case 1:
    cout << "Styczen";
    cout << "\nLiczba dni: 31";
    break;

    case 2:
    cout << "Luty";
    cout << "\nLiczba dni: 28";
    break;

    case 3:
    cout << "Marzec";
    cout << "\nLiczba dni: 31";
    break;

    case 4:
    cout << "Kwiecien";
    cout << "\nLiczba dni: 30";
    break;

    case 5:
    cout << "Maj";
    cout << "\nLiczba dni: 31";
    break;

    case 6:
    cout << "Czerwiec";
    cout << "\nLiczba dni: 30";
    break;

    case 7:
    cout << "Lipiec";
    cout << "\nLiczba dni: 31";
    break;

    case 8:
    cout << "Sierpien";
    cout << "\nLiczba dni: 31";
    break;

    case 9:
    cout << "Wrzesien";
    cout << "\nLiczba dni: 30";
    break;

    case 10:
    cout << "Pazdziernik";
    cout << "\nLiczba dni: 31";
    break;

    case 11:
    cout << "Listopad";
    cout << "\nLiczba dni: 30";
    break;

    case 12:
    cout << "Grudzien";
    cout << "\nLiczba dni: 31";
    break;

    default:
    cout <<"Podales liczbe spoza zakresu.";
    break;
}
if (month >= 4 && month <= 9){
  cout <<"\nW tym miesiacu jest slonecznie.";
}
else{
  cout <<"\nW tym miesiacu jest pochmurno.";
}


    return 0;
}
