#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

// QUESTÃO 1

float raiz_quadrada(float num) {
    float resultado = num / 2;
    float temp;

    do {
        temp = resultado;
        resultado = (temp + (num / temp)) / 2;
    } while ((temp - resultado) != 0);

    return resultado;
}

int main() {
    float numero;
    cout << "Digite um número para calcular a raiz quadrada: ";
    cin >> numero;
    
    if (numero < 0) {
        cout << "Não é possível calcular a raiz quadrada de um número negativo." << endl;
    } else {
        cout << "A raiz quadrada de " << numero << " é aproximadamente " << raiz_quadrada(numero) << endl;
    }
    
    return 0;
}

