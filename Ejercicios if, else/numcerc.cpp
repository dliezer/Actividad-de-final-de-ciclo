#include <iostream>
using namespace std;

int main(void){
    int n, n2, op, op2;
    cout << "Ingresa dos numeros para ver cual esta  mas cercano a 100\n";
    cin >> n;
    cin >> n2;

    op = n - 100;
    op2 = n2 - 100;

    if(op < op2){
        cout << "El numero " << n2 << "esta mas cerca que el " << n << "\n";
    }

    else{
        cout << "El numero " << n << " esta mas cerca que el " << n2 << "\n";
    }
}