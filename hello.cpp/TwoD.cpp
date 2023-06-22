// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int binarySearch(int arr[3][3], int n, int target)
{
    int start = 0;
    int end = n - 1;
    int mid = (start + end) / 2;
    while (start <= end)
    {
        int element = arr[mid / 3][mid % 3];

        if (element == target)
        {
            return 1;
        }
        else if (element < target)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = (start + end) / 2;
    }
    return 0;
}

int main()
{

    int arr[3][3] = {2, 4, 5, 7, 8, 9, 12, 13, 15};

    cout << binarySearch(arr, 9, 13);
    return 0;
}