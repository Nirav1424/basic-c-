#include<iostream>
using namespace std;

class Stack{
   public :                                                                                 
       // data member
       int *arr;
       int top ;
       int size;
      
       // behivaior
       Stack(int size){
           this->size = size;
           arr = new int[size];
           top = -1;
       }

       void push(int element)
       {
        if(size - top > 1){
            top++;
            arr[top] = element;
        }else{
            cout << " stack is overflow" << endl;
        }
    }
    void pop(){
         if( top >= 0){
            top--;
         }else{
            cout << " stack is under flow" << endl;
         }
    }
    int peek(){
        if( top >= 0){
         return arr[top];
         }else{
         cout << "stack is empty" << endl;
         return -1;
         }
    }
    bool isEmpty(){
       if( top == -1){
         return true;
       }else{
         return false;
       }
    }

    
};

int main(){
    Stack s(5);
    s.push(4);
    s.push(9);
   cout<< s.peek();
   s.pop();
   cout<< s.peek();
   return 0;
};