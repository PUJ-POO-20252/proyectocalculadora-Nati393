//
// Created by HolyP on 19/08/2025.
//

// matematicas.__cp
#include "matematicas.h" // Se incluye aa si mismo

// --- Definiciones (El "como")
int sumar(int a, int b) {
    return a + b;
}

int restar(int a, int b) {
    return a - b;
}
int multiplicar(int a, int b) {
    return a * b;
}

int dividir(int a, int b) {
    if (b == 0) return 0; // Evita división por cero
    return a / b;
}
