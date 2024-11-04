//
// Created by Maria Encina on 02/11/2024.
//

#include "main.h"
#include <iostream>
#include <fstream>
#include<stdexcept>
using namespace std;

// Versión de la función que devuelve un valor de error
int divideError(int a, int b) {
    if( b == 0) {
        return -1; // Error
    }else {
        return a / b;
    }
}

int divideExcepcion(int a, int b) {
    if(b == 0) {
        throw runtime_error("Division por cero");
    }else {
        return a / b;
    }
}



int main() {
//Funcion que divide error
    int result = divideError(5, 0);
    if(result == -1) {
        cout << "Error: Division por cero" << endl;
    }else {
        cout << "Resultado: " << result << endl;
    }
//Funcion que divide excepcion
    try {
        result = divideExcepcion(5, 0);
        cout << "Resultado: " << result << endl;
    }catch(runtime_error &e) {
        cout << "Error: " << e.what() << endl;
    }

    return 0;
}

