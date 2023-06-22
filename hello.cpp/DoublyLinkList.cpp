#include<iostream>
using namespace std;


class Node{
    public :
        int data;
        Node *next;
        Node *prev;
    
    Node(int data){
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }
};

void print(Node* head){

    Node *temp = head;

    while (temp != NULL){
        cout << temp->data << " " ;
        temp = temp->next;
    }
    cout << endl;
}

int len(Node *head)
{

    Node *temp = head;
    int length = 0;
    while (temp != NULL)
    {
        length++;
        temp = temp->next;
    }

    return length;
}

void insertFirst(Node* &head , int d){

    Node *temp = new Node(d);

    temp->next = head;
    head->prev = temp;
    head = temp;
}

void insertLast(Node* &tail, int d){

    Node *temp = new Node(d);

    tail->next = temp;
    temp->prev = tail;
    tail = temp;

}

void insertPos(Node* &head , int pos, int d){

    Node *temp = new Node(d);
    int cnt = 1;
    Node *curr = head;

    if( pos == 1){
        insertFirst(head, d);
        return;
    }

    while ( cnt < pos-1 ){
        curr = curr->next;
        cnt++;
    }
   
    temp->next = curr->next;
    curr->next->prev = temp;
    curr->next = temp;
    temp->prev = curr;
}

int main(){

    Node *node1 = new Node(10);
    Node *head = node1;
    Node *tail = node1;

    insertFirst(head, 19);
    insertLast(tail, 2);
    insertPos(head, 3, 45);

    print(head);
    cout << len(head);
    return 0;
}