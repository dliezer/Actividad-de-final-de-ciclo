#include <iostream>
using namespace std;

int main(void){
    int vel;

    cout << "Ingrese su velocidad para verificar si se le aplicó multa\n";
    cin >> vel;

    if(vel <= 60){
    cout << "No se le aplicó multa";
    }
    else{
        if(vel > 60 && vel <= 80){
            cout << "Su multa es de 150";
        }
        else{
            if(vel > 80){
                cout << "Su multa es de 250";
            }
        }
    }
            
    
    
    return 0;

}