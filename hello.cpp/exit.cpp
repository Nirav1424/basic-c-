#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int ans = 0;
    int x = 0;
    string str;
    while(n-- != 0){
       
        cin >> str;
        if(str == "X++"){
            ans = x++;
        }else if(str == "++X"){
            ans = ++x;
        }else if(str == "--X"){
            ans = --x;

        }else {
            ans = x--;
        }
       
    }
    if (n == 1 && str == "X++")
    {

        cout << ans + 1 << endl;
    }
    cout << ans << endl;
}