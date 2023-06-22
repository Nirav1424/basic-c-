#include <bits/stdc++.h>
using namespace std;

// array in repeted item in mimium index 

int main()
{

    int n;
    cin >> n;

    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

   const int N = 100000;
    int idx[N];

    for (int i = 0; i < N; i++)
    {
        idx[i] = -1;
    }

    int mins = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        if (idx[a[i]] != -1)
        {
            mins = min(mins, idx[a[i]]);
        }
        else
        {
            idx[a[i]] = i;
        }
    }

    if (mins == INT_MAX)
    {
        cout << "1"
             << " ";
    }
    else
    {

        cout << mins +1 << " ";
    }

    return 0;
}