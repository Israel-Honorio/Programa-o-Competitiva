#include <bits/stdc++.h>
using namespace std;

int main(){
    std :: ios :: sync_with_stdio(false);
    cin . tie (NULL);

    int N, M; 
    cin >> N >> M;

    vector<int> vi(N); 
    
    for (int i = 0; i < N; ++i) { 
        cin >> vi[i]; 
    } 
    
    vector<int> cj(M); 
    
    for (int j = 0; j < M; ++j) { 
        cin >> cj[j]; 
    }  
    priority_queue<pair<long long, int>, vector<pair<long long, int>>, greater<pair<long long, int>>> fila_caixas; 
    
    for (int i = 0; i < N; ++i) { 
        fila_caixas.push({0, i + 1}); 
    } 
    
    long long tempo_total_gasto = 0; 
    
    for (int j = 0; j < M; ++j) { 
        auto caixa = fila_caixas.top(); 
        fila_caixas.pop(); 
        
        long long novo_tempo_total = caixa.first + vi[caixa.second - 1] * cj[j]; 
        
        fila_caixas.push({novo_tempo_total, caixa.second}); tempo_total_gasto = max(tempo_total_gasto,novo_tempo_total); 
    } 
    
    cout << tempo_total_gasto << endl;

   return 0;
}