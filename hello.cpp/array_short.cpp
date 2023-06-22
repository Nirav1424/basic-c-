#include <iostream>
using namespace std;

int solve(int arr[], int n)
{
    int count = 0, a = 0, b = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
            count++;

        else if (arr[i] == 1)
            a++;

        else
            b++;
    }

    for (int i = 0,j=count,k=a+count; i < count,j<a+count,k<a+b+count; i++,j++,k++)
    {
        arr[i] = 0;
        arr[j] = 1;
        arr[k] = 2;
    }
  
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{

    int arr[] = {0, 1, 2, 0, 1, 2, 2, 1, 0, 0};
    solve(arr, 10);
}