#include <bits/stdc++.h>
using namespace std;

int main(){
    std :: ios :: sync_with_stdio (false);
    cin . tie (NULL);

    string s;
    cin >> s;

    vector<int> v;
    int count = 0;

    for (char c:s){
        if (c == '-'){
            count +=1;
        } else if (c == '|'){
            if (count > 0){
                v.push_back(count);
                count = 0;            
            }
        }
    }

    for (int i = 0; i < v.size(); i++){
        if (i > 0) cout << " ";
        cout << v[i];
    }

    return 0;
}