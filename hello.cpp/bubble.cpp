#include<iostream>
using namespace std;

bubble(int arr[], int n){

    for (int i = 0; i < n; i++){

        for (int j = 0; j < n-i-1; j++){
            if(arr[j] >= arr[j+1]){
                swap(arr[j], arr[j + 1]);
            }
        }
    cout << arr[i] << " ";
    }
}


int main(){
    int arr[7] = {5, 2, 6, 9, 7,8,10};
    bubble(arr, 7);
    return 0;
 }