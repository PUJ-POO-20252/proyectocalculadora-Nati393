//
// Created by HolyP on 26/08/2025.
//

#ifndef CALCULADORA_MATRIZ_UTILS_H
#define CALCULADORA_MATRIZ_UTILS_H

#include <string>

// Declaración de funciones para operaciones con matrices
void sumarMatrices(const int (&a)[2][3], const int (&b)[2][3], int (&resultado)[2][3]);
void imprimirMatriz(const std::string& titulo, const int (&mat)[2][3]);

#endif //CALCULADORA_MATRIZ_UTILS_H