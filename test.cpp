#include <bits/stdc++.h>
using namespace std;

int main() {
    std :: ios :: sync_with_stdio(false);
    cin . tie (NULL);
    
    int n, q;
    cin >> n >> q;
    
    vector<int> A(n);
    for (int i = 0; i < n; ++i) {
        cin >> A[i];
    }
    
    vector<int> prefix(n + 1, 0);
    for (int i = 1; i <= n; ++i) {
        prefix[i] = prefix[i - 1] + A[i - 1];
    }
    
    while (q--) {
        int l, r;
        cin >> l >> r;
        cout << prefix[r] - prefix[l - 1] << endl;
    }
    
    return 0;
}
