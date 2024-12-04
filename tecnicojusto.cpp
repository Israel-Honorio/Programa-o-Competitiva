#include <bits/stdc++.h>
using namespace std;

int main(){
    std :: ios :: sync_with_stdio(false);
    cin . tie (NULL);

    int t;

    cin >> t;

    while(t--){
        int n;

        cin >> n;

        vector <int> v;

        for(int i=0; i<n; i++ ){
            int s;
            cin >> s;
            v.push_back(s);
        } 

        sort(v.begin(), v.end());

        int menor = 1001;

        for(int j=0; j<n-1; j++){
            menor = min(v[j+1] - v[j], menor);
        }
        cout << abs(menor) << endl;

    }

    return 0;
}