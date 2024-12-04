#include <bits/stdc++.h>
using namespace std;

int main()
{
    std ::ios ::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;

    while(n--){
        int i, sum = 1, sz = 1, add = 1;
        cin >> i;
        while(sum < i){

        add += 2;
        sum += add;
        sz++;


        }
        cout << sz << endl;
    }

    

    

    return 0;
}