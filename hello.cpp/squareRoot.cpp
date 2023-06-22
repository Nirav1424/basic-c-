#include<iostream>
using namespace std;

int root(int n){
    int s = 0;
    int e = n;

    int mid = s + (e - s) / 2;
    int ans = -1;
    while (s <= e)
    {
        int square = mid * mid;
        if (square == n)
        {
            return mid;
        }
        if (square < n)
        {
            ans = mid;
            s = mid + 1;
        }
        else{
       e = mid - 1;
   }
   mid = s + (e - s) / 2;
  }
  return ans;
}

double point(int n , int digit , int temp){
    double fact = 1;
    double ans = temp;

    for (int i = 0; i < digit; i++){

        fact /= 10;
        for (double j = ans; j * j < n; j+=fact){
            ans = j;
        }
    }
    return ans;
}

    int main()
{
    int n;
    cin >> n;

    int temp = root(n);
 //   cout << temp;
    cout << point(n, 5, temp) << endl;
    return 0;
}