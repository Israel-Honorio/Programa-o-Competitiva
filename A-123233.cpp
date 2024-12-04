#include <bits/stdc++.h>
using namespace std;

int main(){
    std :: ios :: sync_with_stdio ( false );
    cin . tie ( NULL );

    int n, flag1 = 0, flag2 = 0, flag3 = 0;
    cin >> n;

    string a;
    a = to_string(n);

    for (char c:a){
        if (c == '1'){
            flag1 += 1;
        }
        else if (c == '2'){
            flag2 += 1;
        }
        else if (c == '3'){
            flag3 += 1;
        }
    }

    if (flag1 == 1 && flag2 == 2 && flag3 == 3){
        cout << "Yes";
    } else {
        cout << "No";
    }




    return 0;
}