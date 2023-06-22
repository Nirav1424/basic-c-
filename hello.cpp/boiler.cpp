#include <iostream>
using namespace std;

int bainaraySerach(int arr[], int n, int key)
{

    int start = 0, end = n - 1, mid = (start + end) / 2;

    while (start <= end)
    {

        if (arr[mid] == key)
        {
            return mid;
        }

        if (arr[mid] < key)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = (start + end) / 2;
    }
    return -1;
}

int main()
{

    int arr[9] = {1, 3, 6, 8, 9, 12, 20, 26, 45};
    cout << bainaraySerach(arr, 9, 1) << endl;
    return 0;
}