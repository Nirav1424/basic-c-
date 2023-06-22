#include<bits/stdc++.h>
using namespace std;

int main(){
    int m = 20;
    {
        int k = m;
        int m = 30;

        cout << " we are in iner block" << endl;
        cout << "k = " << k << endl;

        cout << " m = " << m << endl;
        cout << " :: m = " << m << endl;


    }
    cout << " we are in outer block " << endl;
    cout << " m = " << m << endl;
    cout << " :: m = " << m << endl;
}