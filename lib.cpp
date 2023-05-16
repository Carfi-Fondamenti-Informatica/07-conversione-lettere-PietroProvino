#include "lib.h"

 bool verifica_lettera(int a){
    if (((a>=65) && (a<=90)) or ((a>=97) &&( a<=122))){
        return true;
    }
    else{
        return false;
    }
}

char Trasforma_Maiusc(int a){
    if ((a>=97) &&( a<=122)) {
        a=a-32;
        return a;
    }
    else{
        return a;
    }
}
