// main.cpp
#include <iostream>
#include "matematicas.h" // Incluimos nuestro contrato

int main() {
    // Definición de variables
    int x = 10;
    int y = 4;

    int resultado_suma = sumar(x,y); // Les damos a las funciones el valor de la definición
    int resultado_resta = restar(x,y);

    std::cout << "Suma: " <<resultado_suma << std::endl; //Mostramos en pantalla el resultado
    std::cout << "Resta: " <<resultado_resta << std::endl;

    return 0;
}