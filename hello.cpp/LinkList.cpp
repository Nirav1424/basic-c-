#include <iostream>
using namespace std;

//singly linklist

class Node{
    public :
        int data;
        Node* next;

        Node(int data){
            this->data = data;
            this->next = NULL;
        }
};

void insertFirst(Node* &head, int d)
{

        Node *temp = new Node(d);

        temp->next = head;
        head = temp;
}

void insertMiddle(Node* &head ,int pos , int d){

        Node *temp = head;
        int cnt = 1;

        if(pos == 1){
            insertFirst(head, d);
            return;
        }

        

        while( cnt < pos - 1){
            temp = temp->next;
            cnt++;
        }

        // creating a new node
        Node *newNode = new Node(d);
        newNode->next = temp->next;
        temp->next = newNode;
}

void insertLast(Node *&tail, int d)
{

        Node *temp = new Node(d);
        tail->next = temp;
        tail = tail->next;
      
        
     
}

Node* reverese(Node* &head){

        Node *prev = NULL;
        Node *curr = head; 
        Node *forward = NULL;

        while(curr != NULL){
            forward = curr->next;
            curr->next = prev;
            prev = curr;
            curr =forward;
            // forward = forward->next;
        }
        // forward = head;
        return prev;
}


void deletLast(Node* &head , int pos){
        Node *temp = head;
        
        if(pos == 1){
            head = head->next;
            delete temp;
        }else{
            Node *prev = NULL;
            Node *current = head;

            int cnt = 1;
            while(cnt < pos){
                prev = current;
                current = current->next;
                cnt++;
            }

            prev->next = current->next;
            delete current;
        }
}

Node* reverseLinkList(Node* head){

if(head == NULL || head -> next == NULL){
            return head;
}

Node *chotaHead = reverseLinkList(head->next);

head->next->next = head;
head->next = NULL;

return chotaHead;
}

int getLen(Node* head){
int len = 0;
   while(head != NULL){
            len++;
            head = head->next;
   }
   return len;
}

Node *findMiddle(Node *head)
{

int len = getLen(head);
int ans = (len / 2);
int cnt = 0;
Node *temp = head;
while(cnt < ans){
            temp = temp->next;
            cnt++;
}
return temp;
}

void print(Node* &head)
{
         Node *temp = head;

         while (temp != NULL)
         {

            cout << temp->data << " " ;
            temp = temp->next;
         }
         cout << endl;
}


int main(){

        Node* node1 = new Node(10);
        Node* head = node1;
        Node *tail = node1;
        // insertFirst(head , 12);
        // print(head);
        insertFirst(head, 20);

        insertLast(tail, 5);
        
        insertFirst(head, 30);
        insertLast(tail, 2);
        insertMiddle(head, 1, 58);
        deletLast(head,3);
        print(head);
        // reverseLinkList(head);
        // print(head);
        findMiddle(head);
        print(head);

        cout << " head " << head->data << endl;
        cout << "tail " << tail->data << endl;

        return 0;
}