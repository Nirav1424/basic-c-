#include<bits/stdc++.h>
using namespace std;

int main(){

    int n, m,target;
    cin >> n >> m>>target;

    int a[n][m];

    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }

    int k = 0, l = m - 1;
    bool found = false;

    while(k < n && l >=0){


        if(target == a[k][l]){
            found = true;
            cout << "Yes ";
        }
        if(a[k][l] > target){
            l--;
        }else{
            k++;
        }

    }

    if(found){
        cout << "Element present";
    }else{
        cout << "not present";
    }
}