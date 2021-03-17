#include <iostream>
#include <string>
#include <cctype>
#include "Dominios.h"

using namespace std;

// Definição de valores limite para validação
const int Codigo::TAMANHO = 5;

/** Domínio Codigo
* definição dos métodos validar e setCodigo
* validar checa tamanho da string e especifica caracteres
* de A-Z ou 0-9
**/
void Codigo::validar(string codigo) throw (invalid_argument){
    int i;
    if (codigo.length() != TAMANHO) {
        throw invalid_argument("Argumento invalido. Precisa de 5 caracteres");
    }
    for (i=0; i < TAMANHO; i++) {
        if ((codigo[i] <= 'A' && codigo[i] <= 'Z') || isdigit(codigo[i])){
            throw invalid_argument("Argumento invalido. Precisa ter caracteres maiusculos A-Z ou digitos 0-9");
        }
    }
}