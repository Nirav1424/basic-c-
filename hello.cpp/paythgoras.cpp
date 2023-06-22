#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool ispaytha(int x,int y,int z){
    int b, c;

    int a = max(x, max(y, z));

    if(a==x){
         b = y;
        c = z;
    }else if( a == y){
        b = x;
        c = z;
    }else{
        b = x;
        c = y;
    }

    if( a*a == b * b + c * c){
        return true;
    }else{
        return false;
    }
}

    int
    main()
{
    int x,y,z;
    cin >> x;
    cin >> y;
    cin >> z;

    if (ispaytha(x, y, z))
    {
        cout << "yes this num is paythagors" << endl;
}else {
    cout << "not paythgoras " << endl;
}
}