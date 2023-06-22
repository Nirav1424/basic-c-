#include<bits/stdc++.h>
using namespace std;
void prime(int n){

    int pry[100] = {0};

    for (int i = 2; i < n; i++){
        if(pry[i]==0){
            for (int j = i*i; j < n; j+=i){
                pry[j] = i;
            }
        }
    }

    for (int i = 0; i < n; i++){
        if(pry[i] == 0){
            cout << i << " ";
        }
    }
}

int main(){

    int n;
    cin >> n;

    prime(n);
}