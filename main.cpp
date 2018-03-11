#include<iostream>
using namespace std;

struct tree
{
     int data;
     struct tree* left;
     struct tree* right;
};
tree *insert(int num1){
    tree *newnode = new tree;
    newnode->data = num1;
    newnode->left = NULL;
    newnode->right = NULL;
}

 void inorder(struct tree* root)
{
     if (root == NULL)
          return;
    inorder(root->left);
    cout<< root->data;  
     inorder(root->right);
}
 void prenorder(struct tree* root)
{
    if (root == NULL)
          return;
    cout<< root->data;  
    prenorder(root->left);
    prenorder(root->right);
}
 void postnorder(struct tree* root)
{
     if (root == NULL)
          return;
    postnorder(root->left);
    postnorder(root->right);
    cout<< root->data; 
 } 
 
 int main()
{
     struct tree *temp = insert(1);
     temp->left        = insert(2);
     temp->right       = insert(3);
     temp->left->left  = insert(4);
     temp->left->right = insert(5); 
     cout<<"inorder traversal-";
     inorder(temp);
     cout<<endl;
     cout<<"prenorder traversal-";
     prenorder(temp);
     cout<<endl;
     cout<<"postnorder traversal-";
     postnorder(temp);
     cout<<endl;
     return 0;
}