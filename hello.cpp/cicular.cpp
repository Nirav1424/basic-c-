#include<iostream>
using namespace std;

class Node{

    public:
        int data;
        Node *next;

        Node(int data){
            this->data = data;
            this->next = NULL;
        }
};

void insert(Node* &head,int element , int d){

      if(head->data == NULL){
            Node *temp = new Node(d);
            temp->next = temp;
      }else{
            Node *temp = new Node(d);
            Node curr = head;
            while (curr->next != element){
                curr = curr->next;
            }
            curr->next = temp;
            temp->next = curr->next;
      }

}

void print(Node* &head){

      Node *temp = head;

      do{
            cout << temp->data << " ";
            temp = temp->next;
      } while ( temp != head);
}

int main()
{
        Node *node1 = new Node(5);
        Node head = node1;
        insert(head, 5, 3);
        print(head);

        return 0;
}