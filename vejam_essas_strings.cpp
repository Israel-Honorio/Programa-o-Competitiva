#include <bits/stdc++.h>
using namespace std;

int main()
{
    std ::ios ::sync_with_stdio(false);
    cin.tie(NULL);

    
    int n;
    cin >> n;

    while(n--){
        string s; cin >> s;
        int idx = 0;

        for(auto x:s){
            if(x=='a') break;
            idx++;
        }
        if(idx == s.size()){
            cout << "NO" << endl;
            continue;
        }

        int l = idx, r = idx;
        char letra = 'b';
        bool flag = false;


        while(l > 0 || r < s.size()-1){
            if(l > 0 && s[l-1] == letra){
                l--;
                letra++;
            }
            else if(r<s.size()-1 && s[r+1] == letra){
                r++;
                letra++;
            }else{
                cout << "NO" << endl;
                flag = true;
                break;
            }
            
        }

        if (flag == true){
            continue;
        }
        cout << "YES" << endl;
    }


return 0;
}