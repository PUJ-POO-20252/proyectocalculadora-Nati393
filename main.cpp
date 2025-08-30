// main.cpp
#include <iostream>
#include "matematicas.h"

int main() {
    int a, b;
    char operador;

    std::cout << "Ingrese el primer número: ";
    std::cin >> a;

    std::cout << "Ingrese el operador (+, -, *, /): ";
    std::cin >> operador;

    std::cout << "Ingrese el segundo número: ";
    std::cin >> b;

    switch (operador) {
        case '+':
            std::cout << "Resultado: " << sumar(a, b) << std::endl;
            break;
        case '-':
            std::cout << "Resultado: " << restar(a, b) << std::endl;
            break;
        case '*':
            std::cout << "Resultado: " << multiplicar(a, b) << std::endl;
            break;
        case '/':
            std::cout << "Resultado: " << dividir(a, b) << std::endl;
            break;
        default:
            std::cout << "Operador no válido." << std::endl;
    }

    return 0;
}
