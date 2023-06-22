#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n=99;
  
    int ans=99;
    int a = 100, b = 50, c = 20, d = 10;

  
        if (n >= 100)
        {
            cout << "100 = " << n / a << endl;
            ans = n - ((n / a) * 100);
          
        }
         if (ans >= 50 && ans <= 99)
        {
            cout << " 50 = " << ans / b << endl;
            ans = n - ((n / b) * 50);
            cout << ans << endl;
        }
         if (ans >= 20 && ans <= 49)
        {
            cout << "20 = " << ans / c << endl;
            ans = n - ((n / c) * 20);
            cout << ans << endl;
        }
        if( ans < 20)
            cout << " 10 = " << ans / d << endl;
        
        
    
}
