#include<iostream>
using namespace std;

class sample {
    int a, b;
    public :
      void getdata(){
          a = 10;
          b = 20;
      }
      friend sample operator -(sample A){
          A.a -= 5;
         A.b -= 5;
         return A;
      }

      void disp(){
          cout << " a = " << a;
          cout << " b = " << b;
      }
};

int main(){

    sample s;
    s.getdata();
    s=-s;
    s.disp();
    

    return 0;
 }