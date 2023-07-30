    #include <bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;

    while(t-- > 0){
    int ans = 0;
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++){
            cin >> a[i];
        }
    
   
    int min = a[n-1];
    for (int i = n-2; i >= 0; i--){

        //  min = a[n-1];
          if( min > a[i]){
              min = a[i];
          }else{
              ans++;
          }
    }
    cout << ans << endl;
    }
}