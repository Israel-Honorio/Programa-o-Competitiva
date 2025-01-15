#include <bits/stdc++.h>
using namespace std;

int main(){
    std :: ios :: sync_with_stdio(false);
    cin . tie (NULL);

    int n; 
    cin >> n; 
    stack<int> saco; 
    stack<int> max_pesos; 
    while (n--) { 
        char c; 
        
        int x; 
        
        cin >> c >> x; 
        
        if (c == 'A') { 
            saco.push(x); 
            
            if (max_pesos.empty() || x >= max_pesos.top()) {
                
                max_pesos.push(x); 
                
                 } 
        } else if (c == 'V') { 
            if (max_pesos.empty()) { 
                cout << 0 << endl; 
            } else { 
                cout << max_pesos.top() << endl; 
            } 
        } else if (c == 'R') { 
            if (saco.top() == max_pesos.top()) {          
                max_pesos.pop(); 
            } 
            saco.pop(); 
                        
        }
    }

   return 0;
}