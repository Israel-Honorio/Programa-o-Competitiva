#include <bits/stdc++.h>
using namespace std;

int main() { 
    vector<int> numeros = {1, 2, 3, 4, 5}; // Exemplo de vetor 
    // Usando std::copy e std::ostream_iterator para imprimir os elementos separados por espaço 
    copy(numeros.begin(), numeros.end(), ostream_iterator<int>(cout, " ")); 
    cout << endl; // Finaliza a linha de saída 
    return 0; 
}