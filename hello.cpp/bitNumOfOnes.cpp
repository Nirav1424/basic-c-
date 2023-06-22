#include<bits/stdc++.h>
using namespace std;

int NumberOfOnes(int n){

    int counter = 0;

    while(n != 0){  // while(n) also use --> n == 0 then contion is false
        n = n & n - 1;
        counter++;
    }
    return counter;
}

int main(){

    cout << NumberOfOnes(19) << endl;
}