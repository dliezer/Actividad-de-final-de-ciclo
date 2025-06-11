#include <iostream>
using namespace std;

int main(void){
    int n;
    bool flag = false;

    cout << "Ingresa un numero\n";
    cin >> n;

    for(int i = 1; i <= n; i++){
        flag = !flag;
        if(flag == false){
            cout << "-";
        }

        cout << i;

        if(i < n){
            cout << ", ";
        }
    }

    return 0;
}