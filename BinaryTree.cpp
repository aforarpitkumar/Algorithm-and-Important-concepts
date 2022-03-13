#include <iostream>

using namespace std;

struct Node{
    
    int data;
    struct Node *left;
    struct Node *right;
    
    Node (int val){
        
        data = val;
        left = NULL;
        right = NULL;
    }
};

void PreorderT( struct Node* root ){
    if (root == NULL){
        return;
    }
    cout << root -> data << " ";
    PreorderT(root -> left);
    PreorderT(root -> right);
}

void InoderT( struct Node* root){
    if (root == NULL){  
        return;
    }
    InoderT(root -> left);
    cout << root -> data << " ";
    InoderT(root -> right);
}

void PostorderT( struct Node* root){
    if (root == NULL){   
        return;
    }
    PostorderT(root -> left);
    PostorderT(root -> right);
    cout << root -> data << " ";
}

int main()
{
    
    struct Node *root = new Node(1);
    root -> left = new Node(2);
    root -> right = new Node(3);
    
    /*
          1
         / \
        2   3
      
    */
    
    root -> left -> left = new Node(4);
    root -> left -> right = new Node(5);
    root -> right -> left = new Node(6);
    
    /*
          1
         / \
        2   \ 
       / \   \
      4   5   \
               3
              /
             6 
    */
    
    PreorderT(root);
    cout<< " " << endl;
    InoderT(root);
    cout<< " " << endl;
    PostorderT(root);
  
    return 0;
}
