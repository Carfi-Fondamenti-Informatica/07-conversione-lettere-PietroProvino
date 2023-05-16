#include <iostream>
#include "lib.h"
using namespace std;

int main() {
    char b;
    int a;
    cin >> b;
    a=b;
    if(verifica_lettera(a) == true ){
        cout << "Vero" << "";
        cout << Trasforma_Maiusc(a);
    }
    else{
        cout << "errore";
    }
}
