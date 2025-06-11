#include <iostream>
using namespace std;

int main(void){
    int n, op, cont = 0;
    bool flag = true;

    cout << "Ingresa un numero para ver si es primo o no\n";
    cin >> n;

    if(n == 1){
        cout << "Por definicion el 1 no es primo\n";
        return 1;
    }

    for(int i = 1; i <= n; i++){
        op = n % i;
        if(op == 0){
            cont++;
        }
    }

    if(cont > 2){
        cout << "No es primo\n";
    }

    else{
        cout << "Si es primo\n";
    }

    return 0;
}