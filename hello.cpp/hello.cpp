#include <iostream>
#include<map>
using namespace std;

#include <bits/stdc++.h>
int getKthLargest(vector<int> &arr, int k)
{
    //  int a[arr.size()];
    int i = 0;
    vector<int> a(arr.size());
    int n = 0;
    while (i <= arr.size())
    {
        int j = i;
        while (j <= arr.size())
        {
            if( i == j){
                    a[n]  =  arr[i] ;
                j++;
                n++;
            }else{
          a[n] =   arr[i] + arr[j]; 
            j++;
            n++;
            }
        }
        i++;
        // n++;
    }
    sort(a.begin(), a.end());

    // for (int i = 0; i < a.size(); i++){
    //     cout << a[i] << " ";
    // }

        return a[k+1-a.size()];
}

int main(){
    int arr[11] = {5, 2, 2, 5, 1,1,5,2,8,0,0};
    vector<int> ans;
    ans.push_back(4);
    ans.push_back(1);

    // ans.push_back(5);

  cout<<   getKthLargest(ans, 1) <<" ";
    // map<int, int>
    //     ans;
    // for (int i = 0; i < 11; i++)
    // {
    //     ans[arr[i]]++;
    //     cout << ans[arr[i]] << " ";
    // }
    return 0;
}