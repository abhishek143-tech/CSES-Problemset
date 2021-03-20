#include <bits/stdc++.h>
using namespace std;
int main()
{
     ios::sync_with_stdio(0);
     cin.tie(0);
     int t;
     cin >> t;
     while (t--)
     {
          
          int n, b;
          cin >> n >> b;
          int arr[n];
          for (int i = 0; i < n; i++)
          {
               cin >> arr[i];
          }
          sort(arr, arr + n);
          int count = 0;
          for (int i = 0; i < n; i++)
          {
               if (arr[i] <= b)
               {
                    count++;
                    b = b - arr[i];
               }
          }

          cout << "Case #" << 3-t << ":"
               << " " << count << endl;
     }

     return 0;
}