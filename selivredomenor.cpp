#include <bits/stdc++.h>
using namespace std;

int main()
{
    std ::ios ::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v;
        for (int i = 0; i < n; i++){
            int b;

            cin >> b;

            v.push_back(b);
            }

        sort(v.begin(), v.end());
        bool flag = true;
        for (int i = 1; i < n; i++)
        {
            if (v[i] - v[i - 1] > 1)
            {
                flag = false;
                break;
            }
        }
        if (flag)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}