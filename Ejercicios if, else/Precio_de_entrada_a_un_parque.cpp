#include <iostream>
using namespace std;

int main (void){
    int edad;

    cout << "Ingresa la edad para determinar el precio\n";
    cin >> edad;

    if(edad < 5){
        cout << "¡La entrada es gratis!";
    }
    else{
        if(edad >= 5 && edad <= 12){
            cout << "La entrada cuesta $5";
        }
        else{
            cout << "La entrada cuesta $10";
        }
    }
    return 0;
}