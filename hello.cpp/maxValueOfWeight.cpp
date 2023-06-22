// capacity of weight and most high value of in code ==


#include<bits/stdc++.h>
using namespace std;

int capacityOfW(int value[], int wt[], int n,int w){

    if(n==0){
        return 0;
    }

    if(wt[n-1]>w){
        return capacityOfW(value, wt, n - 1, w);
    }

    return max(capacityOfW(value, wt, n - 1, w - wt[n - 1]) + value[n - 1], capacityOfW(value, wt, n - 1, w));
}

int main(){

    int wt[] = {10, 20, 30};
    int value[] = {100, 50, 150};
    int w = 50;

  cout <<   capacityOfW(value, wt, 3, w)<< endl;
}