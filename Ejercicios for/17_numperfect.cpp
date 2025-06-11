#include <iostream>
using namespace std;

int main(void){
    int n, acum = 0, op;

    cout << "Ingresa un numero para ver si es perfecto o no\n";
    cin >> n;

    for(int i = 1; i < n; i++){
        op = n % i;
        if(op == 0){
            acum += i;
        }
    }

    if(acum == n){
        cout << "Es un numero perfecto\n";
    }

    else{
        cout << "No es un numero perfecto\n";
    }

    return 0;
}