#include<bits/stdc++.h>
using namespace std;

void chekeUniqe(int arr[], int n){
    int xemp = 0;
    for (int i = 0; i<n; i++){
        xemp = xemp ^ arr[i];
    }
    cout << xemp << endl;
}

int main(){

    int arr[] = {1, 2, 3, 5, 3, 2, 1};
    int n = 7;
    chekeUniqe(arr, n);
}