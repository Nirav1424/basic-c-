#include <iostream>
using namespace std;

class details
{

protected:
    int std_fname, std_lname;
    int data()
    {
        cout << " Enter the fname : ";
        cin >> std_fname;
        cout << " Enter the lname : ";
        cin >> std_lname;
    }
};

class student : protected details
{
protected:
    int dbms, c, de, psnm;
     data();
    void print()
    {
        cout << "Enter the dbms marks : ";
        cin >> dbms;
        cout << "Enter the c marks : ";
        cin >> c;
        cout << "Enter the de marks : ";
        cin >> de;
        cout << "Emter psname marsk : ";
        cin >> psnm;
    }
};

class total : protected student
{

protected:
    int sum;
    print();
    void getsum()
    {
        sum = dbms + c + psnm + de;
    }
   
};
class avg : protected total
{

public:
    int avg;
    getsum();
    void getavg()
    {

        avg = sum / 4;
        cout << avg;
    }
 
};

class printdata : protected avg
{
public:

        getavg();
    void data1(){
        cout << " your name is " << std_fname << " your subject total marks is : " << sum  << " your avg is " << avg << endl;
    };
};
int main()
{
    printdata ob1;
    ob1.getavg();

    ob1.data1();

    //  cout << "Succsessfully error !!";
    //
     return 0;
}