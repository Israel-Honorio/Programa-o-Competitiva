#include <bits/stdc++.h>
using namespace std;

int main(){
    std :: ios :: sync_with_stdio(false);
    cin . tie (NULL);

    int N, F, P;
    cin >> N >> F >> P;

    vector<int> pesos(N);
    for (int i = 0; i < N; i++) {
        cin >> pesos[i];
    }

    queue<int> fila; 
    for (int i = 0; i < N; i++) {
        fila.push(i);
    }

    int tempo_total = 0;

    int i = 0;

    while (!fila.empty()) {
        int index = fila.front();
        fila.pop();

        if (i % F == 0) {
            
            if (pesos[index] <= P) {
                
                tempo_total += 5; 
            } else {
                
                tempo_total += 10;
                pesos[index] -= 2;
                fila.push(index);
            }
        } else {
            tempo_total += 1;
        }

        i++;
    }

    cout << tempo_total << endl;




   return 0;
}