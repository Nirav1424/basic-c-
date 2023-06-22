#include<iostream>
#include<queue>
using namespace std;

class node{
    public:
    int data;
    node *left;
    node *right;

     node(int d ){
         this->data = d;
         this->left = NULL;
         this->right = NULL;

     }
};

node* buildTree(node* root){

     
     cout << " enter a data " << endl;
     int data;
     cin >> data;
      root = new node(data);

      if (data == -1)
         return NULL;

      cout << " Enter a left side data " << data << endl;
      root->left = buildTree(root->left);

      cout << " Enter a right side data " << data<<endl;
      root->right = buildTree(root->right);

      return root;
}

void levelOrder(node *root)
{

      queue<node *> q;
      q.push(root);
      q.push(NULL);

      while (!q.empty())
      {
         node *temp = q.front();
         q.pop();

         if (temp == NULL)
         {
             cout << endl;
             if (!q.empty())
             {
                 q.push(NULL);
             }
         }
         else
         {
             cout << temp->data << " ";

             if (temp->left)
             {
                 q.push(temp->left);
             }
             if (temp->right)
             {
                 q.push(temp->right);
             }
         }
      }
      //   1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
}
 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
int main(){
      node *root = NULL;
       root = buildTree(root);
       levelOrder(root);
       return 0;
}