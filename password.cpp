#include <bits/stdc++.h>
using namespace std;

string rev(string s)
{
    string temp = "";
    for (int i = s.length() - 1; i >= 0; i--)
    {
        temp += s[i];
    }
    return temp;
}

int main()
{
    int n;
    cin >> n;
    string a[n];
    map<string, int> ts;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        ts[a[i]]++;
        ts[rev(a[i])]++;
    }
    for (int i = 0; i < n; i++)
    {
        if (ts[a[i]] != 1)
        {
            cout << a[i].length() << " " << a[i][a[i].length() / 2] << endl;
            ts[a[i]] = 1;
            ts[rev(a[i])] = 1;
        }
    }
    system("pause");
}