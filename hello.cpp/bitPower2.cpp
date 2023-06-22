#include<bits/stdc++.h>
using namespace std;

// its cheke for you given n is power of two ?!!
bool bitpowerofTwo(int n){
    return n && !(n & n - 1);
}

    int main()
{

    cout << bitpowerofTwo(16) << endl;
}