#include <iostream>
using namespace std;

int main(void){
    int acum = 0, n;

    cout << "Ingresa un numero para ver su sumatoria\n";
    cin >> n;

    for(int i = 1; i <= n; i++){
        acum = acum + i;
    }

    cout << "La suma es: " << acum << "\n";

    return 0;
}