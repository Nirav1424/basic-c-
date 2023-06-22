// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int binarySearch(int arr[9], int n)
{
    int min = 100000;

    for (int i = 0; i < n; i++)
    {
        if (min > arr[i])
        {
            min = arr[i];
        }
    }
    return min;
}

int main()
{

    int arr[9] = {2, 4, 5, 17, 8, 9, 12, 13, 15};

    cout << binarySearch(arr, 9);
    return 0;
}