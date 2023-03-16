#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        int k = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int sum_l = 0;
        int sum_r = 0;
        int i = 0;
        for (int j = 0; j < i; j++)
        {
            sum_l += a[j];
        }
        for (int k = i + 1; k < n; k++)
        {
            sum_r += a[k];
        }
        if (sum_l == sum_r)
        {
            cout << "YES" << endl;
            continue;
        }
        for (i = 1; i < n; i++)
        {
            sum_l += a[i - 1];
            sum_r -= a[i];
            if (sum_l == sum_r)
            {
                cout << "YES" << endl;
                k++;
                break;
            }
        }
        if (!k)
        {
            cout << "NO" << endl;
        }
    }
    system("pause");
}
