#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n;
    cin >> n;
    ll arr[n - 1];
    for (int i = 0; i < n - 1; i++)
    {
        cin >> arr[i];
    }
 
    int res = 0, res1 = 0;
    for (int i = 1; i <= n; i++)
    {
        res = res ^ i;
    }
    for (int i = 0; i < n - 1; i++)
    {
        res1 = res1 ^ arr[i];
    }
    int final = res1 ^ res;
    cout << final << endl;
 
    return 0;
}