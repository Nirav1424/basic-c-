#include<iostream>
using namespace std;
class swap1 {
    public:
    int avg(int a, int b , int c)
    {
        return a + b + c /3;
    }
};

int main()
{
    swap1 ob1;

    int a = 10, b = 2, c = 5;
   

    cout << ob1.avg(a , b , c);

    return 0;
}