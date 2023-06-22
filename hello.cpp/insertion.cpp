#include<iostream>
using namespace std;

int insertion(int arr[], int n){

    for (int i = 0; i < n; i++){
        int min = i;
        for (int j = i + 1; j < n ; j++)
        {
            if(arr[j]<= arr[min]){
                min = j;
            }
           
        }
       
        swap(arr[i], arr[min]);
        cout << arr[i] << " ";
    }
}
int main(){
    int arr[8] = {2, 5, 3, 1, 9,14,26,2};

    insertion(arr, 8);
    return 0;
 }