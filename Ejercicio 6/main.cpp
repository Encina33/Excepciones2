//
// Created by Maria Encina on 02/11/2024.
//

#include "main.h"
#include<iostream>
#include<stdexcept>

void lanzaExcepcion() {
    throw std::runtime_error("Error en la función lanzaExcepcion");
}

int main() {
    lanzaExcepcion();

    return 0;
}