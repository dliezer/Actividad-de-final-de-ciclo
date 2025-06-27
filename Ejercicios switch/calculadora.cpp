#include <iostream>

using namespace std;

int main() {
    int op, num1, num2, sum, rest, mult, div, exp, mod;
    cout << "Bienvenido/a a la calculadora, por favor, ingrese una opción:\n";
    cout << "1. Suma\n";
    cout << "2. Resta\n";
    cout << "3. Multiplicacion\n";
    cout << "4. Division\n";
    cout << "5. Exponente\n;
    cout << "6. Modulo\n";
    cout << "Salir\n";
    cin >> op;

    switch (op) {
      case 1:
        cout << "Ingresa los 2 numeros para hacer la suma\n";
        cin >> num1, num2;
        sum = num1 + num2;
    }
}
