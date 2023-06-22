#include<bits/stdc++.h>
using namespace std;

int moveArr(int arr[], int n){
    int i = 0;
    
        for (int j = i; j < n; j++){
            if (arr[j] != 0)
            {
                swap(arr[j], arr[i]);
                i++;
            }
        }
   
   for (int i = 0; i < n; i++){
       cout << arr[i] << " ";
   }
}

    int
    main()
{

    int arr[] = {1, 0, 3, 12, 2, 0};

    moveArr(arr, 6);

    return 0;
}