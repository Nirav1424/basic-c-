#include<bits/stdc++.h>
using namespace std;

void swap(int a,int b){
    int temp = a;
    a = b;
    b = temp;
}

void callbyrefrence(int *a,int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}




    int main()
{

    int a = 10;
    int b = 20;

    swap(a, b);
    cout << a << " " << b << endl;

    callbyrefrence(&a, &b);
    cout << a << " " << b << endl;

    // int *nptr = &n;

    // int **ndptr = &nptr;

    // cout << n << " ";
    // cout << nptr << " ";
    // cout << *nptr << " ";

    // cout << "double ponter";

    // cout << ndptr << " ";
    // cout << *ndptr << " ";
    // cout << **ndptr << " ";
}