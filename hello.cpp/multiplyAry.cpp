#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n, m, k;
    cin >> n >> m >> k;

    int b[n][m],c[m][k];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> b[i][j];
        }
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < k; j++)
        {
            cin >> c[i][j];
        }
    }

    int a[n][k];

    for (int i = 0; i < n; i++){
        for (int j = 0; j < k;j++){
            a[i][j] = 0;
        }
    }

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < k; j++)
            {
                for (int d = 0; d < m; d++)
                {

                    a[i][j] += b[i][d] * c[d][j];
                }
            }
        }

    for (int i = 0; i < n; i++){
        for (int j = 0; j < k; j++){
            cout << a[i][j] <<" ";
        }
        cout << endl;
    }
}