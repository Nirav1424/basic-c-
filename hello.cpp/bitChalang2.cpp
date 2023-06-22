#include <bits/stdc++.h>
using namespace std;
int setbits(int n, int pos)
{
    return ((n & (1 << pos)) != 0);
}

void DoubleUniqe(int arr[], int n)
{

    int xemp = 0;
    for (int i = 0; i < n; i++)
    {
        xemp = xemp ^ arr[i];
    }

    int setbit = 0;
    int pos = 0;
    int tempxemp = xemp;

    while (setbit != 1)
    {
        setbit = xemp & 1;
        pos++;
        xemp = xemp >> 1;
    }
    int newxemp = 0;
    for (int i = 0; i < n; i++)
    {
        if (setbits(arr[i], pos - 1))
        {
            newxemp = arr[i] ^ newxemp;
        }
    }

    cout << newxemp << " " << endl;
    cout << (tempxemp ^ newxemp) << endl;
}

int main()
{

    int arr[] = {1, 2, 5, 3, 2, 1};
    int n = 6;

    DoubleUniqe(arr, n);
}