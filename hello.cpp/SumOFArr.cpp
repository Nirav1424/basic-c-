#include<iostream>
using namespace std;

int sumOfArr(int arr[], int n)
{

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return sum;
}

int main(){

    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }

    cout << sumOfArr(arr, n) << " " << endl;
}

