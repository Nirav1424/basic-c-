#include<iostream>
using namespace std;

class sample {
    int a, b;
    public :
          void getdata(){
              a = 10;
              b = 20;
          }
          void operator -(){
              a -= 5;
              b -= 5;
          }
          void display (){
              cout << "The value a is " << a << endl;
              cout << "The value b is " << b << endl;
          }
};

int main(){
    sample s;
    s.getdata();
    -s;
    s.display();
    return 0;
}