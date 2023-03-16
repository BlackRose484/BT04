#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n], b[n + 1];
    map<int, int> ts;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        ts[a[i]]++;
    }
    for (int i = 0; i < n + 1; i++)
    {
        cin >> b[i];
        ts[b[i]]++;
    }
    for (int i = 0; i < n; i++)
    {
        if (ts[b[i]] & 1)
        {
            cout << b[i] << endl;
            ts[b[i]] = 0;
        }
    }
    system("pause");
}